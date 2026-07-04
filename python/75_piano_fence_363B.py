n, k = map(int, input().split())
h = list(map(int, input().split()))
current = sum(h[:k])
best = current
idx = 1
for i in range(k, n):
    current += h[i] - h[i - k]
    if current < best:
        best = current
        idx = i - k + 2
print(idx)
