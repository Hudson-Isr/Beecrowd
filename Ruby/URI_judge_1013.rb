A,B,C = gets.split(' ').map(&:to_i)

X = (A + B + (A - B).abs) / 2
Y = (X + C + (X - C).abs) / 2

puts "#{Y} eh o maior"