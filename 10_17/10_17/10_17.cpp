#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//
//	int n = 0;
//	printf("%d\n", 017); //0��ͷ����Ϊ�ǰ˽�������
//
//	int a = 5;
//	int b = -6;
//
//	int c = a & b;//��λ�룬��Ӧ������λ����0��Ϊ0������ͬʱΪ1��Ϊ1
//	int d = a | b;//��λ�򣬶�Ӧ������λ����1��Ϊ1������ͬʱΪ0��Ϊ0
//	int d = a ^ b;//��λ��򣬶�Ӧ������λ����ͬΪ0������Ϊ1
//
//	return 0;
//}

//ֻ���������
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


//����λ���㣬����������
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
//ÿ��ִ�ж�����һ��1
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


//~��λȡ��
//int main()
//{
//	int n = 0;
//	int a = ~n;
//
//	printf("%d\n", a);
//	return 0;
//}

//�ж�һ�����ǲ���2^n��
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



