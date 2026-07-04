from collections import Counter
import sys

lines = sys.stdin.read().splitlines()
if len(lines) < 2:
    sys.exit(0)
s1 = lines[0]
s2 = lines[1]
freq = Counter(c for c in s1 if c != " ")
for c in s2:
    if c == " ":
        continue
    if freq[c] <= 0:
        print("NO")
        break
    freq[c] -= 1
else:
    print("YES")
