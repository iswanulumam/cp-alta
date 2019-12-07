def match(cardOne, cardTwo):
  for cone in cardOne:
    if cone in cardTwo:
      return True
  return False

def dominoCard(cards, deck):
  maxCard = -1
  result = []
  for card in cards:
    totalCard = card[0] + card[1]
    if match(card, deck) and totalCard > maxCard:
      maxCard = totalCard
      result = card
  return "tutup 1 kartu" if maxCard == -1 else f"keluarkan kartu {result}"

print(dominoCard([[3,3], [6,5], [3,4], [2,1]], [3,5])) # "keluarkan kartu [6,5]"
print(dominoCard([[3,3], [6,5], [3,4], [2,1]], [1,3])) # "keluarkan kartu [3,4]"
print(dominoCard([[2,4], [6,6], [3,6]], [1,5])) # "tutup 1 kartu"
print(dominoCard([[3,3], [4,4], [5,5]], [6,6])) # "tutup 1 kartu"
print(dominoCard([[3,3], [4,4], [5,5]], [5,6])) # keluarkan kartu [5,5]
