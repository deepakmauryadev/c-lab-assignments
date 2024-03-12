#include "stdio.h"

int fib(int n) {
	return n <= 1 ? n : fib(n-1) + fib(n-2);
}

int main() { 
	int n;
	printf("Enter fibonacci term serial number: ");
	scanf("%d", &n);

	int fn = fib(n);
	printf("Fibonacci of %d term is %d\n", n, fn);

	return 0; 
}