import math

x = input().split()
y = input().split()

x1,y1 = map(float,x)
x2,y2 = map(float,y)

r = math.sqrt(pow(x1 - x2,2) + pow(y1 - y2, 2))

print(f"{r:.4f}")