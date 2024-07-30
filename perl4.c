
# Initialize an array
my @array = (10, 20, 30, 40, 50);

# Print the original array
print "Original array: @array\n";

# a) Shift: Remove the first element of the array
my $shifted_element = shift @array;
print "After shift (removed element: $shifted_element): @array\n";

# b) Unshift: Add elements to the beginning of the array
unshift @array, 5, 15;
print "After unshift (added elements 5 and 15): @array\n";

# c) Push: Add elements to the end of the array
push @array, 60, 70;
print "After push (added elements 60 and 70): @array\n";

