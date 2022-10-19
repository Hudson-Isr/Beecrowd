n = float(input())

print("NOTAS:")
print(f"{int(n/100)} nota(s) de R$ 100.00")
n = n % 100

print(f"{int(n/50)} nota(s) de R$ 50.00")
n = n % 50

print(f"{int(n/20)} nota(s) de R$ 20.00")
n = n % 20

print(f"{int(n/10)} nota(s) de R$ 10.00")
n = n % 10

print(f"{int(n/5)} nota(s) de R$ 5.00")
n = n % 5

print(f"{int(n/2)} nota(s) de R$ 2.00")
n = n % 2

print("MOEDAS:")
print(f"{int(n/1)} moeda(s) de R$ 1.00")
n = n % 1
print(f"{int(n/0.50)} moeda(s) de R$ 0.50")
n = n % 0.50

print(f"{int(n/0.25)} moeda(s) de R$ 0.25")
n = n % 0.25

print(f"{int(n/0.10)} moeda(s) de R$ 0.10")
n = n % 0.10

print(f"{int(n/0.05)} moeda(s) de R$ 0.05")
n = n % 0.05

print(f"{n/0.01:.0f} moeda(s) de R$ 0.01")