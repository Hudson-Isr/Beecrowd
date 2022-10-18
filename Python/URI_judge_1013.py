p1 = input().split()
a, b, c = map(int,p1)

x = (a+b+abs(a-b))/2
y = (x+c+abs(x-c))/2

print(f"{int(y)} eh o maior")