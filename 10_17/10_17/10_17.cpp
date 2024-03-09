#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//
//	int n = 0;
//	printf("%d\n", 017); //0开头会认为是八进制数字
//
//	int a = 5;
//	int b = -6;
//
//	int c = a & b;//按位与，对应二进制位上有0则为0，两个同时为1才为1
//	int d = a | b;//按位或，对应二进制位上有1则为1，两个同时为0才为0
//	int d = a ^ b;//按位异或，对应二进制位上相同为0，相异为1
//
//	return 0;
//}

//只能输出正数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	printf("%d", count);
//	return 0;
//}


//用移位计算，正负都可以
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//n = n&(n-1)
//每次执行都会少一个1
//int main()
//{
//	int a = 0;
//	int count = 0;
//
//	scanf("%d", &a);
//
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//~按位取反
//int main()
//{
//	int n = 0;
//	int a = ~n;
//
//	printf("%d\n", a);
//	return 0;
//}

//判断一个数是不是2^n次
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if ((a & (a - 1)) == 0)
//	{
//		printf("yes\n");
//
//	}
//	else {
//		printf("no\n");
//	}
//
//	return 0;
//}



