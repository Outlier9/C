#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//}sa;
//
//
//int main()
//{
//	int b = 0;
//	scanf("%d", &b);
//	sa._b = b;
//
//	return 0;
//}
// 
//结构体
//struct S
//{
//	char c;
//	int i;
//};

//联合体
//union U
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union U u = { 0 };
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.i);
//	printf("%p\n", &u.c);
//	return 0;
//}

//union Un1
//{
//	char c[5];//5   1 8 1
//	int i;//4       4 8 4
//};

//union Un2
//{
//	short c[7];//14    2 8 2
//	int i;     //4     4 8 4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


#include<stdlib.h>
//int main()
//{
//	int *p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//free(p);
//	//p = NULL;
//
//	return 0;
//}