# Procedure to multiply numbers from 1 to n
proc multiplyNumbers {n} {
    set product 1
    for {set i 1} {$i <= $n} {incr i} {
        set product [expr {$product * $i}]
    }
    return $product
}

set number 10
set result [multiplyNumbers $number]
puts "The product of numbers from 1 to $number is: $result"

