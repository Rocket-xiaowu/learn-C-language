#include<stdio.h>
#include<math.h>
int main() {
	float a, b;
	scanf_s("%f%f", &a, &b);
	int k = (int)(a / b);
	float r = k * b - a;
	printf("%f", r);
}