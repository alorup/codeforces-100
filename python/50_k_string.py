k = int(input().strip())
s = input().strip()
from collections import Counter

cnt = Counter(s)
for v in cnt.values():
    if v % k != 0:
        print(-1)
        raise SystemExit
base = "".join(ch * (cnt[ch] // k) for ch in sorted(cnt.keys()))
print(base * k)
