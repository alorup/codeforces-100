from collections import Counter

s = input().strip()
odd = sum(1 for c, v in Counter(s).items() if v % 2)
print("First" if odd == 0 or odd % 2 == 1 else "Second")
