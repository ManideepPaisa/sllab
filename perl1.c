#!/usr/bin/perl
use strict;
use warnings;

my $st = "s1\\pglab";
print "The original string: $st\n";

# Substitute 's1' with 'scripting'
$st =~ s/s1/scripting/;
print "After substitution: $st\n";

