def divisor_count(x: int) -> int:
    cnt = 0
    d = 1
    while d * d <= x:
        if x % d == 0:
            cnt += 1
            if d * d != x:
                cnt += 1
        d += 1
    return cnt

n = int(input().strip())
ans = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        for k in range(1, n + 1):
            ans += divisor_count(i * j * k)
print(ans % 1073741824)
