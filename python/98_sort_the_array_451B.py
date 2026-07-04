n = int(input())
a = list(map(int, input().split()))
b = sorted(a)
l = 0
while l < n and a[l] == b[l]:
    l += 1
if l == n:
    print('yes')
    print(1, 1)
else:
    r = n - 1
    while r >= 0 and a[r] == b[r]:
        r -= 1
    a[l:r + 1] = reversed(a[l:r + 1])
    if a == b:
        print('yes')
        print(l + 1, r + 1)
    else:
        print('no')
