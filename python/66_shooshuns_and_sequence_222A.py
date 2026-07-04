n, k = map(int, input().split())
a = list(map(int, input().split()))
target = a[k - 1]
print(sum(1 for x in a if x != target))
