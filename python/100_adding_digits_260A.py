a, b, n = map(int, input().split())
x = a
for _ in range(n):
    for digit in range(10):
        if (x * 10 + digit) % b == 0:
            x = x * 10 + digit
            break
    else:
        print(-1)
        break
else:
    print(x)
