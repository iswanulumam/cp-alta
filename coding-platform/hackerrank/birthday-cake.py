def birthdayCakeCandles(ar):
  max_candles = -1
  mapper_candle = {}
  for a in ar:
    if a > max_candles:
      max_candles = a
    if a not in mapper_candle:
      mapper_candle[a] = 1
    else:
      mapper_candle[a] += 1
  return mapper_candle[max_candles]

print(birthdayCakeCandles([3, 2, 1, 3])) # 2