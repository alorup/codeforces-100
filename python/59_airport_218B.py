import heapq

n, m = map(int, input().split())
a = list(map(int, input().split()))
# max
maxh = [-x for x in a]
heapq.heapify(maxh)
maxsum = 0
for _ in range(n):
    x = -heapq.heappop(maxh)
    maxsum += x
    if x - 1 > 0:
        heapq.heappush(maxh, -(x - 1))
# min
minh = a[:]
heapq.heapify(minh)
minsum = 0
for _ in range(n):
    x = heapq.heappop(minh)
    minsum += x
    if x - 1 > 0:
        heapq.heappush(minh, x - 1)
print(maxsum, minsum)
