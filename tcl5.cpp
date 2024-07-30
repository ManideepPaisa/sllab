# Define file paths
set file1 "path/to/first_file"
set file2 "path/to/second_file"

# Get modification times
set mtime1 [file mtime $file1]
set mtime2 [file mtime $file2]

# Compare modification times
if {$mtime1 > $mtime2} {
    puts "$file1 is more recently modified than $file2"
} elseif {$mtime1 < $mtime2} {
    puts "$file2 is more recently modified than $file1"
} else {
    puts "$file1 and $file2 were modified at the same time"
}

