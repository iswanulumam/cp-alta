def balikKata(kata):
  reverse = ''
  for i in range(len(kata)-1, -1, -1):
    reverse += kata[i]
  return reverse

# Driver Code
print(balikKata('Hello World and Coders')) # sredoC dna dlroW olleH
print(balikKata('John Doe')) # eoD nhoJ
print(balikKata('I am a bookworm')) # mrowkoob a ma I
print(balikKata('Coding is my hobby')) # ybboh ym si gnidoC
print(balikKata('Super')) # repuS