// 3.1 - 

#include <stdio.h>

int main()
{
	// Printf has no limit to the amount of variables
	// The keys followed by % are called conversion specifications
	// Converts the binary stored at the location to a string
	// Sometimes compilers don't check that the amount of conversion specs and values match
	// They also don't always check the type
	// Conversion specifications give alot of control over the program's output
	// %x is a conversion spec
	// Control over the amount of digits after . is by placing %.2f after the %
	// The above will produce 2 digits after the decimal place
	// These can get too complex for this area of the book- will be simple for now
	// Minimum field width can be decalared -- if there's too few digits to display, there will be empty spaces
	// Putting a - before the number makes the spaces be placed on the right of the var
	// SO: %5d will show an int with 5 total spaces and empty spaces on the left
	// And %-5d will do the same but with spaces on the right

	// For the below notes P is 5 from above;
	// d - Shows an int. If it's an int the above syntax will show as zeros
	// e - Displays a float in exponential format (scientific notation)(where p is the amount of digits post .)
	//	   For e the default is 6.
	// f - Displays a float in fixed decimal format, without an exponent, the use of p is the same as e
	// g - Displays either e or f, depending on size. p = the amount of significant digits
	//     however, when displaying an f format- g doesn't display trailing zeros
	//     g is best used for numbers that will vary greatly in size

	// There are many other specifiers
	
	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}