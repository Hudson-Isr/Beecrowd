v = float(input())

if v <= 400.00:
    s = v * 1.15
    r = s - v
    p = 15
    print(f"Novo salario: {s:.2f}")
    print(f"Reajuste ganho: {r:.2f}")
    print(f"Em percentual: {p} %")
elif 400.01 <= v <= 800.00:
    s = v * 1.12
    r = s - v
    p = 12
    print(f"Novo salario: {s:.2f}")
    print(f"Reajuste ganho: {r:.2f}")
    print(f"Em percentual: {p} %")
elif 800.01 <= v <= 1200.00:
    s = v * 1.10
    r = s - v
    p = 10
    print(f"Novo salario: {s:.2f}")
    print(f"Reajuste ganho: {r:.2f}")
    print(f"Em percentual: {p} %")
elif 1200.01 <= v <=2000.00:
    s = v * 1.07
    r = s - v
    p = 7
    print(f"Novo salario: {s:.2f}")
    print(f"Reajuste ganho: {r:.2f}")
    print(f"Em percentual: {p} %")
elif v > 2000.00:
    s = v * 1.04
    r = s - v
    p = 4
    print(f"Novo salario: {s:.2f}")
    print(f"Reajuste ganho: {r:.2f}")
    print(f"Em percentual: {p} %")