n, q = map(int, input().split())
a = list(map(int, input().split()))
b = sorted(a)
pref = [0] * (n + 1)
pref_sorted = [0] * (n + 1)
for i, x in enumerate(a, start=1):
    pref[i] = pref[i - 1] + x
for i, x in enumerate(b, start=1):
    pref_sorted[i] = pref_sorted[i - 1] + x
for _ in range(q):
    t, l, r = map(int, input().split())
    if t == 1:
        print(pref[r] - pref[l - 1])
    else:
        print(pref_sorted[r] - pref_sorted[l - 1])
