#include<stdio.h>
#include<stdlib.h>

int lcm(int a, int b);
int main() {
	int a, b;
	printf("Enter two integers:");
	scanf_s("%d %d", &a, &b);
	lcm(a, b);
	system("pause");
	return 0;
}
int lcm(int a, int b)
{
	int x=1;
	while (1)
	{
		if(x % a== 0 && x % b== 0)
		{
			printf("The LCM of %d and %d is %d", a, b, x);
			break;
		}
		x++;
	}
	return x;
}