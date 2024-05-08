use warnings;
use strict;

die "Program needs 6 Arguments, x, y, density, empt_char, obs_char, full_char" unless (scalar(@ARGV) == 6);

my ($x, $y, $density, ${empty_char}, ${obs_char}, ${full_char}) = @ARGV;

# Generate the output string
my $output = "$y${empty_char}${obs_char}${full_char}\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
        if (int(rand($y) * 2) < $density) {
            $output .= "${obs_char}";
        } else {
            $output .= "${empty_char}";
        }
    }
    $output .= "\n";
}

# Save the output to a file with the same name as the line 10 print statement
open(my $fh, '>', "${y}${empty_char}${obs_char}${full_char}") or die "Could not open file: $!";
print $fh $output;
close($fh)
