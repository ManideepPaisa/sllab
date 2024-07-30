#!/usr/bin/perl
use strict;
use warnings;

# Define three numbers
my $number1 = 5;
my $number2 = 9;
my $number3 = 4;

# Initialize the largest number to the first number
my $largest = $number1;

# Compare with the second number
if ($number2 > $largest) {
    $largest = $number2;
}

# Compare with the third number
if ($number3 > $largest) {
    $largest = $number3;
}

# Print the largest number
print "The largest number among $number1, $number2, and $number3 is $largest.\n";

