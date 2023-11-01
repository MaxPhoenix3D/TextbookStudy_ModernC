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
	printf("|%10.3f|%10.3e|%-10g|\n\a", x, x, x);

	return 0;

	// \n is referred to as an escape sequence
	// These allow us to include characters that would normally cause compiler errors
	// Such as characters that don't print or have special meanings to the compiler such as "
	// \a will cause the code to make a sound when it is reached
	
	// Scanf works in the same way as printf
	// The amount of conversion specifications must match the amount of input variables
	// Each conversion must match up with each input variable's type
	// The dereferencer is usually required -- not always
	// We will get to pointers in chapter 11
	// Scanf can be unforgiving -- a lot of programmers avoid it for simply importing character strings and converting
	// the numbers manually after the fact 
	// Code can break if the wrong information is input to a scanf statement
	// There are ways to check that it is formatted correctly
	// But the examples in this textbook won't use them in the example code
	// Will be covered in 22.3
	// When using numbers, scanf skips over any whitespace >1, it only looks for the starts and ends of numbers
	// This means that using spaces or new lines between numbers are both valid 
	// It searches for a + or - or a digit, then reads until it reaches a non-digit
	// It can also find a decimal place or an e (exponent) without error
	// 
	//
}