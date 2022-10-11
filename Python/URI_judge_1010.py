n1 = input().split()
n2 = input().split()

c1, qtd1, v1 = n1
c2, qtd2, v2 = n2

tt = (int(qtd1)) * (float(v1)) + (int(qtd2)) * (float(v2))

print(f"VALOR A PAGAR: R$ {tt:.2f}")