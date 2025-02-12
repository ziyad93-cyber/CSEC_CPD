z = input()
x = input()
z = z.lower()
x = x.lower()

if z == x:
    print("0")
elif z < x:
    print("-1")
else:
    print("1")
