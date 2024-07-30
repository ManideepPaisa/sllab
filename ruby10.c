# Function to calculate the total marks using a for loop
def total_marks(marks_hash)
  total = 0
  for marks in marks_hash.values
    total += marks
  end
  total
end

# Example hash with subject names and marks
student_marks = {
  "Math" => 85,
  "English" => 78,
  "Science" => 92,
  "History" => 74,
  "Art" => 88
}

# Calculate the total marks
total = total_marks(student_marks)

# Output the total marks
puts "The total marks are: #{total}"

