from collections import Counter

n = int(input().strip())
a = list(map(int, input().split()))
print("YES" if max(Counter(a).values()) <= (n + 1) // 2 else "NO")
