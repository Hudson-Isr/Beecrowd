import math

bhaskara = input().split()
a,b,c = map(float,bhaskara)

d = pow(b,2) - (4*a*c)
x1 = -b +math.sqrt(d)
x2 = -b -math.sqrt(d)
r1 = x1/(2*a)
r2 = x2/(2*a)

if(d<0):
    print("Impossivel calcular")
elif(x1 == 0 or x2 == 0):
    print("Impossivel calcular")
else:
    print(f"R1 = {r1:.5f}")
    print(f"R2 = {r2:.5f}")