// factorial of number 'n'

#include "stdio.h"

int factorial(int n) {
	if (n == 0) {
		return 1;
	} else {
		return n * factorial(n-1);
	}
}
int main() { 
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);

	int f = factorial(a);
	printf("The factorial of %d is %d\n", a, f);

	return 0; 
}