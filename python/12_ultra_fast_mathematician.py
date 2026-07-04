a = input().strip()
b = input().strip()
print(''.join('0' if a[i]==b[i] else '1' for i in range(len(a))))
