# Create a list
set my_list {apple banana cherry}

# Append elements to the list
lappend my_list "date"
lappend my_list "elderberry"

# Traverse the list and print each element
puts "Traversing the list:"
foreach item $my_list {
    puts $item
}

# Concatenate the list into a single string
set concatenated_string [join $my_list ", "]

# Output the concatenated string
puts "Concatenated list: $concatenated_string"
