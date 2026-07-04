n = int(input().strip())
for i in range(0, n + 1):
    print(" " * (2 * (n - i)), end="")
    print(
        " ".join(str(j) for j in range(0, i + 1))
        + ("" if i == 0 else " " + " ".join(str(j) for j in range(i - 1, -1, -1)))
    )
for i in range(n - 1, -1, -1):
    print(" " * (2 * (n - i)), end="")
    print(
        " ".join(str(j) for j in range(0, i + 1))
        + ("" if i == 0 else " " + " ".join(str(j) for j in range(i - 1, -1, -1)))
    )
