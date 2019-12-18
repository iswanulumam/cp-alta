#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {	
	int n;
	scanf("%d %d", &n, &n);
	int m1[n][n], m2[n][n];
	for (int y=0; y<n; y++)
		for (int x=0; x<n; x++)
			scanf("%d", &m1[y][x]);

	scanf("%d %d", &n, &n);
	for (int y=0; y<n; y++)
		for (int x=0; x<n; x++)
			scanf("%d", &m2[y][x]);

	//Cek kalau [A] = [B]
	bool done=true;
	for (int y=0; y<n; y++)
		for (int x=0; x<n; x++)
			if (m1[y][x] != m2[y][x]) done = false;
	if (done) {	printf("identik\n"); return 0; }

	//Cek kalau [A] direfleksikan horisontal [B]
	done = true;
	for (int y=0; y<n; y++)
		for (int x=0; x<n; x++)
			if (m1[y][x] != m2[n-1-y][x]) done = false;
	if (done) {	printf("horisontal\n");	return 0; }	

	//Cek kalau [A] direfrelsikan vertikal [B]
	done = true;
	for (int y=0; y<n; y++)
		for (int x=0; x<n; x++)
			if (m1[y][x] != m2[y][n-1-x]) done = false;
	if (done) {	printf("vertikal\n"); return 0; }		

	//cek kalau [a] dan [b] refleksi kanan bawah (\) atau transpos
	done = true;
	for (int y=0; y<n; y++)
		for (int x=0; x<n; x++)
			if (m1[y][x] != m2[x][y]) done = false;
	if (done) {	printf("diagonal kanan bawah\n"); return 0; }				

	
	//cek kalau [a] dan [b] refleksi kiri bawah (/)
	done = true;
	for (int y=0; y<n-1; y++)
		for (int x=0; x<n-y-1; x++)
			if (m1[y][x] != m2[n-x-1][n-y-1]) done = false;
	if (done) {	printf("diagonal kiri bawah\n"); return 0; }				

	printf("tidak identik\n");
}
