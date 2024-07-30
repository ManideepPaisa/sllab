sub validate_ip {
    my ($ip_address) = @_;
    if ($ip_address =~ /^(\d{1,3}\.){3}\d{1,3}$/) {
        my @octets = split(/\./, $ip_address);
        foreach my $octet (@octets) {
            if ($octet < 0 || $octet > 255) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}

sub validate_email {
    my ($email_address) = @_;
    if ($email_address =~ /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/) {
        return 1;
    } else {
        return 0;
    }
}

my $test_ip = '192.168.1.1';
if (validate_ip($test_ip)) {
    print "$test_ip is a valid IP address.\n";
} else {
    print "$test_ip is an invalid IP address.\n";
}

my $test_email = 'example@example.com';
if (validate_email($test_email)) {
    print "$test_email is a valid email address.\n";
} else {
    print "$test_email is an invalid email address.\n";
}

