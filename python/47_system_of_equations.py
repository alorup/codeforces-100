n, m = map(int, input().split())
cnt = 0
for a in range(0, 1001):
    b = n - a * a
    if b < 0:
        continue
    if b * b + a == m:
        cnt += 1
print(cnt)
