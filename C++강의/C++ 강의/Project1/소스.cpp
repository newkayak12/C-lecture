#include <stdio.h>	

float add(float a, float b) {
	float c = a + b;
	return c;
}


int main() {

	float a = 1.2f;
	float b = 3.4f;

	printf("%f + %f = %f", a, b, add(a, b));

	return 0;
}