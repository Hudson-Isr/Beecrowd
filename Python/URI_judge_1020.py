n = int(input())

a = int(n/365)
n -= a * 365

m = int(n/30)
n -= m * 30

d = int(n/1)

print(f"{a} ano(s)")
print(f"{m} mes(es)")
print(f"{d} dia(s)")