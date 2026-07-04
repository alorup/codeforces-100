n = int(input().strip())
left = right = 0
for _ in range(n):
    l,r = map(int, input().split()); left += l; right += r
print(min(left, n-left) + min(right, n-right))
