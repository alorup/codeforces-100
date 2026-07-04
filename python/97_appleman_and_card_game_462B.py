n, k = map(int, input().split())
s = input().strip()
from collections import Counter
cnt = Counter(s)
ans = 0
for f in sorted(cnt.values(), reverse=True):
    if k <= 0:
        break
    take = min(k, f)
    ans += take * f
    k -= take
print(ans)
