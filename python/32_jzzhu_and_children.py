n, m = map(int, input().split())
a = list(map(int, input().split()))
best = 0
idx = 1
for i, val in enumerate(a):
    rounds = (val + m - 1) // m
    if rounds >= best:
        best = rounds
        idx = i + 1
print(idx)
