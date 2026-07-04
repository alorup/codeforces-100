n = int(input().strip())
weights = list(map(int, input().split()))
c100 = weights.count(100)
c200 = weights.count(200)
total = c100 * 100 + c200 * 200
if total % 2 == 0 and (c200 % 2 == 0 or c100 >= 2):
    print("YES")
else:
    print("NO")
