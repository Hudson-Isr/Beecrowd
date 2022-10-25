valor = input().split()
a,b = map(float,valor)

if a == 1:
    print(f"Total: R$ {4.00*b:.2f}")
elif a == 2:
    print(f"Total: R$ {4.50*b:.2f}")
elif a == 3:
    print(f"Total: R$ {5.00*b:.2f}")
elif a == 4:
    print(f"Total: R$ {2.00*b:.2f}")
elif a == 5:
    print(f"Total: R$ {1.5*b:.2f}")