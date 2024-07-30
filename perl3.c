
# Subroutine to print multiplication tables from 1 to 5
sub submul {
    for (my $i = 1; $i <= 10; $i++) {
        for (my $j = 1; $j <= 10; $j++) {
            my $res = $i * $j;
            print "$i x $j = $res\n";
        }
        print "\n"; 
		 # Print a newline for readability between tables
    }
}

# Call the subroutine to print the tables
submul();

