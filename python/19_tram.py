n = int(input().strip())
cur = ans = 0
for _ in range(n):
    a,b = map(int, input().split()); cur += b-a; ans = max(ans, cur)
print(ans)
