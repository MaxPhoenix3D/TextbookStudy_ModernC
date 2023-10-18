// 2.1 - 2.3
/*
// The group of pre-processor statements are called directives
#include <stdio.h>

int main(void) 
{
	// Pre-processor statements define how the program processes the code - adding to and changing things about the program!
	// They are also known as directives 
	// The 3 stpes to compiling are: 
	// 1. Prepprocessing (Reading # statements) 
	// 2. Compiling (Changing code to machine code, "object code")
	// 3. Linking (Including the things that were linked in the preprocessing phase)

	// Code in C is broken into directives, functions and statements
	// Library functions are functions that aren't written by the programmer
	// The term comes from math, where you give a function values and it returns new values

	// each statment shoul end with a ; except for a compound statement
	
	// A string literal = a string in ""
	
	// The // type of comments are more modern, and are preferred because it's easy to identify which lines are commented
	// Float numbers are error prone, due to being approximations of coordinates 

	// The code down here is called statments
	printf("To c or not to c, that is the question!\n");

	// The following is a way of declaring several variables of the same type
	// These are different to statements, because they allocate new area in memory
	// So these are called declarations

	int height, length, width;
	float profit, loss;

	// It's good practise to add f to the end of floats when assigning data

	profit = 12.428907432f;

	height = 12;
	length = 12;
	width = 2;

	int volume = height * length * width;
	// The right side of an operator (*,+,-,/) can be a constant, variable or an operator

	// %d is a temporary hold in of an integer, which will be replaced by volume. 

	printf("Volume: %d\n", volume);

	// %f is used for floats
	// By default %f refers to 6 digits, but we can force it to be longer/shorter
	// This is done with .xf where x is the amount of digits after the decimal place we want to display

	printf("Profit: %.2f", profit);

	// Being able to write declarations under statements is new in C99
	// In C++ and Java it is commonplace to declare as new variables are needed

	// The braces used here are from C's goal of using as little characters as possible
	// Other languages at the time would use begin and end 
	return 0;
}
*/

// 2.4 - 2.6
/*
#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	height = 8;
	length = 12;
	width = 10;

	volume = height * length * width;

	weight = (volume + 165) / 166;

	printf("Dimensions %d x %d x %d\n", length, width, height);
	printf("Volume (In cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	// Uninitialized variables are bad
	// In the following declaration, 8 is the assignment

	int thisNumber = 8;

	// Also-- math can be done inside of printf statements
	// The f in scanf and printf stands for formatted- they are both only working in strings
	// But the %x tags are there to help the compiler format the string

	scanf("%d", &thisNumber);

	// The & won't be described yet, but it's used when using scanf

	return 0;
}
*/

// 2.6
/*
#include <stdio.h>
#define INCHES_PER_POUND 166
// You can define a constant here to replace the words with the number in the program
// It's a preprocessor statement - it will replace the words with the number at run time
// It is conventional to use all caps on define macros

int main(void)
{
	int height, length, width, volume, weight;

	printf("Enter the height of the box: ");
	scanf_s("%d", &height);

	printf("Enter the length of the box: ");
	scanf_s("%d", &length);

	printf("Enter the width of the box: ");
	scanf_s("%d", &width);

	volume = height * width * length;
	weight = (volume + INCHES_PER_POUND) / 166;

	printf("The volume is: %d\n", volume);
	printf("The dimensional weight is: %d\n", weight);

	return 0;
}
*/

// 2.6
/*
#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float fahrenheit, celcius;

	printf("Please enter a fahrenheit temperature: ");
	scanf_s("%f", &fahrenheit);

	celcius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

	printf("The equivelant to that in celcius is: %.1f", celcius);

	// Names of variables are called identifiers
	// They can't use a number at the start - but can use a number within
	// General rule of thumb is they can use characters, numbers and underscores
	// Keep names looking different unless they're somewhat related
	// There are no limits on the size of a name, and intellisense is there
	// So make names long and descriptive if need be
	// There are certain keywords that can't be used as variable names
	// Identifiers can't start with an _
	// Also certain names are banned depending on the compiler / libraries in use

	// C can be broken up into tokens
	// Groups of characters that can't be split up/changed without changing their function
	// Incl. (, ), printf, etc. etc.
	// GCC Has command line functions to find errors in code 
	// exit(0) is usable instead of return(0) in int main(), it's a matter of taste

	// You can't next multiline comments
	// There is a better way to toggle whether or not a certail part of the code runs
}
*/

// 2.7 and programming projects

// #include <stdio.h>
// #define PI 3.14159265359

//int main()
//{
	// Project 1 
	/*
	printf("       *\n");
	printf("      * \n");
	printf("     *  \n");
	printf("*   *   \n");
	printf(" * *    \n");
	printf("  *     \n");
	*/

	// Project 2
	/*
	double v = 0;
	double r = 10;

	v = (4.0f / 3.0f) * (PI) * (r * r * r);

	printf("%lf\n", v);
	*/

	// Project 3
	/*
	v = 0;

	printf("Please enter the radius: ");

	scanf_s("%lf", &r);

	v = (4.0f / 3.0f) * (PI) * (r * r * r);

	printf("The circumference of that sphere would be: %lf", v);
	*/

	// Project 4
	/*
	double money = 0;

	printf("please enter a money amount: ");
	scanf_s("%lf", &money);

	printf("The dollars amount is %.2lf\n", money);
	
	money = money * 1.05;

	printf("And the amount after adding 5%% is: %.2lf", money);
	*/

	// Project 5
	/*
	double x = 0;

	printf("Please enter a value for X: ");

	scanf_s("%lf", &x);

	x = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;

	printf("The value after the equation is: %lf", x);
	*/

	// Project 6
	/*
	double x = 0;

	printf("Please enter a value for X: ");

	scanf_s("%lf", &x);

	x = ((((3 * x + 2) * x - 5) * x - 1) * x - 7)* x - 6;

	printf("The value after the equation is: %lf", x);
	*/

	// Project 7
	/*
	int dollars = 0;
	int amount = 0;

	printf("Please enter an amount to find the amount of notes needed: ");
	scanf_s("%d", &dollars);
	
	amount = dollars / 20;
	dollars = dollars - amount * 20;

	printf("$20 Notes: %d\n", amount);

	amount = dollars / 10;
	dollars = dollars - amount * 10;

	printf("$10 Notes: %d\n", amount);

	amount = dollars / 5;
	dollars = dollars - amount * 5;

	printf("$5 Notes: %d\n", amount);

	amount = dollars / 1;
	dollars = dollars - amount * 1;

	printf("$1 Notes: %d\n", amount);
	*/

	// Project 8
	/*
	double loanRemaining = 0;
	double interestRate = 0;
	double monthlyPayment = 0;

	printf("Enter amount of loan: ");
	scanf_s("%lf", &loanRemaining);

	printf("Enter interest rate: ");
	scanf_s("%lf", &interestRate);

	printf("Enter monthly payment: ");
	scanf_s("%lf", &monthlyPayment);

	interestRate /= 1200;
	interestRate++;

	loanRemaining *= interestRate;
	loanRemaining -= monthlyPayment;

	printf("Month 1: %lf\n", loanRemaining);

	loanRemaining *= interestRate;
	loanRemaining -= monthlyPayment;

	printf("Month 2: %lf\n", loanRemaining);

	loanRemaining *= interestRate;
	loanRemaining -= monthlyPayment;

	printf("Month 3: %lf\n", loanRemaining);
	*/
//}