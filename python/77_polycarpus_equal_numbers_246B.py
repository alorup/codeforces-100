n = int(input().strip())
a = list(map(int, input().split()))
print(n if sum(a) % n == 0 else n - 1)
