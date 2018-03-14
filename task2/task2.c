#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a = 3;
	int b = 6;
	int result = 0;
	int array_operations[4];

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
printf ("Operand 'a' :\n"); return a;
printf ("Operand 'b' :\n"); return a + b;
printf ("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide):\n");

int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' from 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }

printf ("x = %d\n", result);
