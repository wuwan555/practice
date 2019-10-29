#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 4;
//	int b = 6;
//	printf("%d %d", a, b);
//	return 0;
//}
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
#if 0
int check_sys()
{
	union
	{
		int i ;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
#endif
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//#include <stdio.h> 
int main()
{
	char a = -128;
	printf("%u\n", a);
	return 0;
}
//#include <stdio.h> 
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
