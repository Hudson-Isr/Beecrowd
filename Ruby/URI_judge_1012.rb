X = gets.split(' ')

TRI = (X[0].to_f * X[2].to_f) / 2
C = 3.14159 * (X[2].to_f ** 2)
TRA = ((X[0].to_f + X[1].to_f) * X[2].to_f) / 2
Q =  X[1].to_f ** 2
R = X[0].to_f * X[1].to_f

puts "TRIANGULO: %.3f" % TRI
puts "CIRCULO: %.3f" % C
puts "TRAPEZIO: %.3f" % TRA
puts "QUADRADO: %.3f" % Q
puts "RETANGULO: %.3f" % R