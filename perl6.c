#!/usr/bin/perl

use strict;
use warnings;

# Check if the filename is provided
die "Usage: $0 filename\n" unless @ARGV == 1;

my $filename = $ARGV[0];

# Open the file and read its lines
open my $fh, '<', $filename or die "Cannot open $filename: $!\n";
my @lines = <$fh>;
close $fh;

# Print lines in reverse order
print reverse @lines;


#commands
Save this script to a file, for example, reverse_file.pl.
Make it executable: chmod +x reverse_file.pl.
Run it with a filename: ./reverse_file.pl yourfile.txt.
