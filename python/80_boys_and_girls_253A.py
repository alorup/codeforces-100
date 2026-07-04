n, m = map(int, input().split())
major, minor = ("B", "G") if n >= m else ("G", "B")
if m > n:
    major, minor = minor, major
    n, m = m, n
result = []
while n > 0 and m > 0:
    result.append(major)
    result.append(minor)
    n -= 1
    m -= 1
result.extend(major * n)
result.extend(minor * m)
print("".join(result))
