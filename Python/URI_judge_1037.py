x = float(input())

if(x<0 or x>100):
    print("Fora de intervalo\n")
elif(x<=25.0):
    print("Intervalo [0,25]\n")
elif(x<=50.0):
    print("Intervalo (25,50]\n")
elif(x<=75.0):
    print("Intervalo (50,75]\n")
elif(x<=100.0):
    print("Intervalo (75,100]\n")