def generateBarChart(value):
  max_value = max(value)

  for i in range(max_value, -1, -1):
    paper = f'{i}|'
    for j in range(0, len(value)):
      if value[j] >= max_value:
        paper += ' III '
      else:
        paper += '     '
    if i == 0:
      value_str = list(map(str,  value))
      paper = '0|-(' + ')--('.join(value_str) + ')-\n'
    max_value -= 1
    print(paper)

generateBarChart([3, 6, 4, 7, 2])

'''
7|                III      
6|      III       III      
5|      III       III      
4|      III  III  III      
3| III  III  III  III      
2| III  III  III  III  III
1| III  III  III  III  III
0|-(3)--(6)--(4)--(7)--(2)-
'''

generateBarChart([9, 8, 7, 0, 1, 2, 3])
'''
9| III                               
8| III  III                          
7| III  III  III                     
6| III  III  III                     
5| III  III  III                     
4| III  III  III                     
3| III  III  III                 III
2| III  III  III            III  III
1| III  III  III       III  III  III
0|-(9)--(8)--(7)--(0)--(1)--(2)--(3)-
'''

generateBarChart([1, 2, 3, 4, 5, 4, 3, 2, 1])
'''
5|                     III                     
4|                III  III  III                
3|           III  III  III  III  III           
2|      III  III  III  III  III  III  III      
1| III  III  III  III  III  III  III  III  III
0|-(1)--(2)--(3)--(4)--(5)--(4)--(3)--(2)--(1)-
'''