s = input().strip()
print('YES' if any(ch in 'HQ9' for ch in s) else 'NO')
