a = input().strip()
b = input().strip()
c = input().strip()
print("YES" if sorted(a + b) == sorted(c) else "NO")
