puts "Enter first name:"
first_name = gets.chomp

puts "Enter last name:"
last_name = gets.chomp

reversed_first_name = first_name.reverse
reversed_last_name = last_name.reverse

result = reversed_first_name + " " + reversed_last_name
puts result

