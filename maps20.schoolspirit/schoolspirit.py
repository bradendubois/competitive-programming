from sys import stdin

def university_score(points: list):
    university_total = 0
    for score in range(len(points)):
        university_total += points[score] * ((4/5) ** score)
    university_total *= (1/5)
    return university_total

n = int(stdin.readline().rstrip())

total = 0
scores = []
for i in range(n):
    s = int(stdin.readline().rstrip())
    scores.append(s)
    total += s

print(university_score(scores))

g_total = 0
for i in range(len(scores)):
    g_scores = scores.copy()
    g_scores.pop(i)
    g_total += university_score(g_scores)

print(g_total / (len(scores)))
