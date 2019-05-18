def mutate_string(string, position, character):
  return string[:position] + character + string[position+1:]

string = input()
index, new_char = input().split()
new_string = mutate_string(string, int(index), new_char)
print(new_string)