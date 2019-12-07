import re

def cekDataTransaksi(logs):
	hasil={
		'id_transaksi': None,
		'id_order': None,
		'nomor_seri': None,
		'nomor_referensi': None,
		'success': False
	}

	pattern_id_transaksi= r'Transaction\s#[0-9]*'
	pattern_id_order= r'[trx_id]+\s[=]\s[A-Z]+[-][A-Z][a-z]+[\|][A-Z]{3}[-][\d]+'
	pattern_nomor_seri= r'SN[:][\d]+'
	pattern_nomor_referensi= r'Ref\sId\.\s:[\d]+'
	for log in logs:
		search_idt= re.search(pattern_id_transaksi, log)
		if search_idt is not None:
			pos= search_idt.span()
			hasil['id_transaksi'] = log[pos[0]:pos[1]].replace('Transaction #','')

		search_ido= re.search(pattern_id_order, log)
		if search_ido is not None:
			pos= search_ido.span()
			hasil['id_order'] = log[pos[0]:pos[1]].replace('trx_id = ','')

		search_ns= re.search(pattern_nomor_seri, log)
		if search_ns is not None:
			pos= search_ns.span()
			hasil['nomor_seri'] = log[pos[0]:pos[1]].replace('SN:','')

		search_nr= re.search(pattern_nomor_referensi, log)
		if search_nr is not None:
			pos= search_nr.span()
			hasil['nomor_referensi'] = log[pos[0]:pos[1]].replace('Ref Id. :','')

	if hasil['nomor_seri'] is not None:
		hasil['success']= True
	return hasil

print(cekDataTransaksi([
	'Insert Transaction #14879',
	'Update Status To Pending Payment With Deposit',
	'Transaction Paid trx_id = YPSTRX-Indragiri|IDG-14879',
	'Transaction On Biller  type_modem arg: telkomsel_mobile queue_name arg: smtel-banyumas_mobile',
	'Success Manual SN:94309403940394039403 Ref Id. :394039403'
]))

'''
{
	'nomor_seri': '94309403940394039403', 
	'id_transaksi': '14879', 
	'id_order':'trxid = YPSTRX-Indragiri|IDG-14879', 
	'nomor_referensi': '394039403',
	'success': True
}
'''

print(cekDataTransaksi([
	'Insert Transaction #18254',
	'Update Status To Pending Payment With Deposit',
	'Transaction Paid trx_id = YPSTRX-Brebes|BYS-18254',
	'Transaction On Biller  type_modem arg: telkomsel_mobile queue_name arg: smtel-banyumas_mobile',
	'Trx. Cancel Process Begin | cancel trx with id18254',
	'Sukses Refunded trx id. 18254 with Wallet hash #eko827p7rk89m456'
]))

'''
{
	'nomor_referensi': None, 
	'nomor_seri': None, 
	'id_transaksi': '18254', 
	'id_order': 'YPSTRX-Brebes|BYS-18254',
	'success': False
} 
'''
