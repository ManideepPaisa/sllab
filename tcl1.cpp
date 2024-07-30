proc factorial {n} {
    if {$n == 0} {
        return 1
    } else {
        return [expr {$n * [factorial [expr {$n - 1}]]}]
    }
}

set number 5
puts "The factorial of $number is: [factorial $number]"
