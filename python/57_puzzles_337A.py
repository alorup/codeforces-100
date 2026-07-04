n, k = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
best = 10**18
for i in range(0, n - k + 1):
    best = min(best, a[i + k - 1] - a[i])
print(best)
