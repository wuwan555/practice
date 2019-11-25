#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Ege(int*a, int*b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a=0;
	int b=0;
	scanf("%d'%d", &a, &b);
	Ege(a, b);
	printf("a=%d,b=%d", a, b);
	return 0;
}

