#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Fact(int n)
//{
//	if (n <= 0)
//	{
//		return 1;
//	}
//	else {
//		return n * Fact(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);

	return 0;

}