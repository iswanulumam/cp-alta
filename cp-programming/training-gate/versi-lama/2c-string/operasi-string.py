S1 = input()
S2 = input()
S3 = input()
S4 = input()

S1 = S1.replace(S2, "")
index = S1.find(S3) + len(S3)
result = S1[:index] + S4 + S1[index:]

print(result)