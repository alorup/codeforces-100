n = int(input().strip())
arr = list(map(int, input().split()))
imax = arr.index(max(arr))
imin = n - 1 - arr[::-1].index(min(arr))
moves = imax + (n - 1 - imin)
if imax > imin:
    moves -= 1
print(moves)
