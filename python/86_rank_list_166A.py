n, k = map(int, input().split())
contestants = []
for _ in range(n):
    score, penalty = map(int, input().split())
    contestants.append((score, penalty))
contestants.sort(key=lambda x: (-x[0], x[1]))
target = contestants[k - 1]
print(sum(1 for c in contestants if c == target))
