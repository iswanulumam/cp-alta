def cariModus(arr):
  mapper = {}
  modus_key = None
  modus_value = -999
  for a in arr:
    key = a
    if key in mapper:
      mapper[key] += 1
      if mapper[key] >= modus_value:
        modus_value = mapper[key]
        modus_key = key
    else:
      mapper[key] = 1
  if modus_key == None or len(mapper) == 1:
    return -1
  else:
    return modus_key

# Driver Code
print(cariModus((10, 4, 5, 2, 4))) # 4
print(cariModus((5, 10, 10, 6, 5))) # 5
print(cariModus((10, 3, 1, 2, 5))) # -1
print(cariModus((1, 2, 3, 3, 4, 5))) # 3
print(cariModus((7, 7, 7, 7, 7))) # -1