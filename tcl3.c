proc compare {a b} {
    return [expr {$a - $b}]
}

set my_list {3 5 6 9 0 2 1}

set sorted_list [lsort -command compare $my_list]

puts "Original list: $my_list"
puts "Sorted list: $sorted_list"
