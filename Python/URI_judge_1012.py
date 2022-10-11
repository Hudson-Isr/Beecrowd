p1 = input().split()
a, b, c = p1
pi = 3.14159

tr = (float(a) * float(c))/2
cr = pi * (float(c)* float(c))
t = float(c) *(float(a) + float(b)) / 2
q = float(b) * float(b)
r = float(a) * float(b)

print(f"TRIANGULO: {tr:.3f}")
print(f"CIRCULO: {cr:.3f}")
print(f"TRAPEZIO: {t:.3f}")
print(f"QUADRADO: {q:.3f}")
print(f"RETANGULO: {r:.3f}")