import sys
from collections import defaultdict

data = list(map(int, sys.stdin.buffer.read().split()))
n = data[0]
a = data[1:]
pos = defaultdict(list)
for i, x in enumerate(a, start=1):
    pos[x].append(i)
for x in sorted(pos):
    if len(pos[x]) == 2:
        print(pos[x][0], pos[x][1])
