s = input().strip()
c = sum(1 for ch in s if ch in '47')
print('YES' if c==4 or c==7 else 'NO')
