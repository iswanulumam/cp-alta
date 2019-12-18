
def make_matriks(matriks):
  for j in range(0, 3):
    new = []
    for i in range(0, 3):
      new.append(matriks[i][j])
    print(str.join(' ', new))

matriks = []

for i in range(0, 3):
  val = input()
  list_val = val.split()
  matriks.append(list_val)

make_matriks(matriks)