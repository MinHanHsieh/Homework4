#include<stdlib.h>
#include<stdio.h>

int f(int a, int b);
int main() {
	int a, b;
	printf("Enter base and exponent:");
	scanf_s("%d %d", &a, &b);
	printf("%d", f(a,b));
	return 0;
}
int f(int a, int b)
{
	if (b > 1) 
	{
		long int ans = a * f(a, b - 1);
		return ans;
	}
	if (b == 1) 
	{
		return a;
	}
}