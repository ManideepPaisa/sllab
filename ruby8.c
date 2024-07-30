puts "Enter two temperatures:"

puts "Temperature 1:"
n1 = gets.chomp.to_i

puts "Temperature 2:"
n2 = gets.chomp.to_i

if (n1 < 0 && n2 > 100) || (n1 > 100 && n2 < 0)
  puts true
else
  puts false
end
