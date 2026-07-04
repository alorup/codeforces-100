n, m = map(int, input().split())
cur = 1
ans = 0
for _ in range(m):
    t = int(input().strip())
    if t >= cur:
        ans += t - cur
    else:
        ans += n - (cur - t)
    cur = t
print(ans)
