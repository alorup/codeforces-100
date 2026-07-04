n = int(input().strip())
a = list(map(int, input().split()))
a.sort()
print(sum(abs(x - i) for i, x in enumerate(a, start=1)))
