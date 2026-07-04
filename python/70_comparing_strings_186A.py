s1 = input().strip()
s2 = input().strip()
diff = sum(1 for a, b in zip(s1, s2) if a != b)
print("YES" if diff == 2 else "NO")
