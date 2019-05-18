S = input()

result = ""
for i in range(len(S)-1, -1, -1):
  result += S[i]

print(result)