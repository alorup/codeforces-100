n = int(input().strip())
a = list(map(int, input().split()))
mn = min(a)
if a.count(mn) > 1:
    print("Still Rozdil")
else:
    print(a.index(mn) + 1)
