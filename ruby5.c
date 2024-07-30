def find_greatest(a, b, c)
  if a >= b && a >= c
    a
  elsif b >= a && b >= c
    b
  else
    c
  end
end

# Get user input
print "Enter the first number: "
num1 = gets.chomp.to_i

print "Enter the second number: "
num2 = gets.chomp.to_i

print "Enter the third number: "
num3 = gets.chomp.to_i

# Find the greatest number
greatest_number = find_greatest(num1, num2, num3)
puts "The greatest number is: #{greatest_number}"

