puts "Enter a filename:"
filename = gets.chomp

exten = File.extname(filename)

puts "Extension of the file is" +exten

