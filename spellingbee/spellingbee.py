from sys import stdin

data = stdin.read().strip().split("\n")

letters = set(data[0])

for word in data[2:]:
    if set(word).issubset(letters) and len(word) >= 4 and data[0][0] in word:
        print(word)
