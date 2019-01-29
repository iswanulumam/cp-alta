def check(cardOne, cardTwo):
  if cardOne[0] == cardTwo[0]:
    return True
  if cardOne[0] == cardTwo[1]:
    return True
  if cardOne[1] == cardTwo[0]:
    return True
  if cardOne[1] == cardTwo[1]:
    return True
  return False

def dominoCard(card, deck):
  maxValue = -999
  result = []
  for eachCard in card:
    totalCard = eachCard[0] + eachCard[1]
    if check(eachCard, deck) and totalCard > maxValue:
      maxValue = totalCard
      result = eachCard
  return "tutup 1 kartu" if maxValue == -999 else f"keluarkan kartu {result}"

print(dominoCard([[3,3], [6,5], [3,4], [2,1]], [3,5])) # "keluarkan kartu [6,5]"
print(dominoCard([[3,3], [6,5], [3,4], [2,1]], [1,3])) # "keluarkan kartu [3,4]"
print(dominoCard([[2,4], [6,6], [3,6]], [1,5])) # "tutup 1 kartu"