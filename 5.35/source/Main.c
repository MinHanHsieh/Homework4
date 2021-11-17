#include<stdio.h>
#include<stdlib.h>

unsigned long long f(int n);

int main()
{
	int n;
	printf("Enter n:");
	scanf_s("%d", &n);
	printf("0 1 ");
	f(n);
	return 0;
}
unsigned long long f(int n)
{
	unsigned long long a = 0;
	unsigned long long b = 1;
	unsigned long long ans=0;
	for (int i = 1; i <= n; i++) 
	{
		ans = a + b;
		a = b;
		b = ans;
		printf("%I64d ", ans);
	}
}