s = input().strip()
lower = sum(1 for c in s if c.islower())
upper = len(s) - lower
if upper > lower:
    print(s.upper())
else:
    print(s.lower())
