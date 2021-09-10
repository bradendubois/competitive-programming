f = dict()
f[0] = 1
f[1] = 2

i = 0
total = 0

while True:
    if i not in f:
        f[i] = f[i-1] + f[i-2]
    if f[i] > 4000000:
        break
    if f[i] % 2 == 0:
        total += f[i]
    i += 1
print(total)

