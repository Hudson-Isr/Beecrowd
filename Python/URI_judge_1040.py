nota = input().split()
n1,n2,n3,n4 = map(float,nota)

m = (n1*2.0 + n2*3.0 + n3*4.0 + n4*1.0) / 10.0
print(f"Media: {m:.1f}")

if(m >= 5.0 and m <=6.9):
    print("Aluno em exame.")
    ex = float(input())
    print(f"Nota do exame: {ex}")
    ne = (m + ex) / 2
    print("Aluno aprovado.")
    print(f"Media final: {ne:.1f}")

elif(m>=7.0):
    print("Aluno aprovado.")

else:
    print("Aluno reprovado.")