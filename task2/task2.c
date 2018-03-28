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
	int a = 6;
	int b = 3;
	int result = -1;
	int user_input = -1;
	int (*array_operations[4])(int a, int b);
	array_operations[0] = &add;
	array_operations[1] = &subtract;
	array_operations[2] = &multiply;
	array_operations[3] = &divide;

	printf ("Operand 'a' : 6\n");
	printf ("Operand 'b' : 3\n");
	printf ("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide):\n");
	scanf ("%d", &user_input);

	result = (*array_operations[user_input])(a, b);
	printf ("x = %d\n", result);
	
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' from 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }
