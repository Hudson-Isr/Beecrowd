p1 = input().split()
a, b, c = p1

x = (int(a)+int(b)+abs(int(a)-int(b)))/2
y = (int(x)+int(c)+abs(int(x)-int(c)))/2

print(f"{int(y)} eh o maior")