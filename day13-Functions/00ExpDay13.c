#include "stdio.h"

int add(int a, int b);
int subtreact(int a, int b);
float multiply(float a, float b);
float divide(float a, float b);
float square(float a);

int main() { 
	// code 
	float s = divide(2,3);
	printf("%f\n", s);

	return 0; 
}

int add(int a, int b) {
	return a+b;
}
int subtreact(int a, int b) {
	return a-b;
}
float multiply(float a, float b) {
	return a*b;
}
float divide(float a, float b) {
	return a/b;
}
float square(float a) {
	return a * a;
}
