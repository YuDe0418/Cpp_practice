a, b, c = map(int, input().split())

if a > b:
    a, b = b, a
if b > c:
    b, c = c, b
if a > b:
    a, b = b, a

print(a, b, c)

if a + b <= c:
    print("No")
else:
    if a * a + b * b < c * c:
        print("Obtuse")
    if a * a + b * b == c * c:
        print("Right")
    if a * a + b * b > c * c:
        print("Acute")
