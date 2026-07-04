n = int(input())
freq = [0] * (24 * 60)
ans = 1
for _ in range(n):
    h, m = map(int, input().split())
    t = h * 60 + m
    freq[t] += 1
    ans = max(ans, freq[t])
print(ans)
