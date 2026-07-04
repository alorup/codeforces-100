n, m = map(int, input().split())
for i in range(n):
    s = input().strip()
    out = []
    for j, ch in enumerate(s):
        if ch == "-":
            out.append("-")
        else:
            out.append("B" if (i + j) % 2 == 0 else "W")
    print("".join(out))
