set source_file "path/to/your/source_file.txt"
set dest_file "path/to/your/destination_file.txt"

if {![file exists $source_file]} {
    puts "Source file does not exist: $source_file"
    return
}

set infile [open $source_file r]
set outfile [open $dest_file w]

while {[gets $infile line] >= 0} {
    puts $outfile [string trimright $line]
    puts $outfile "\r"
}

close $infile
close $outfile

puts "File copied and translated to: $dest_file"
