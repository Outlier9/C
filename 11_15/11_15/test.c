#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}s4, s5 = {"wangwu",24,98.0f};//全局变量
//
//int main()
//{
//	//struct Stu s1, s2, s3;//局部变量
//	struct Stu s1 = { "zhangsan",20,98.5f };
//	struct Stu s2 = { "lisi",33,68.5f };
//
//	struct Stu s4 = { .name = "zhaoliu",.age = 35,.score = 78 };
//	printf("%s %d %f\n", s1.name, s1.age, s1.score);
//	printf("%s %d %f\n", s4.name, s4.age, s4.score);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S1 s1 = { 'a','b',100 };
//	struct S2 s2 = { 'a',100, 'b'};
//	printf("%zd\n", sizeof(s1));
//	printf("%zd\n", sizeof(s2));
//	return 0;
//}


#include<stddef.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%zd\n", offsetof(struct S4, c1));
//	printf("%zd\n", offsetof(struct S4, s3));
//	printf("%zd\n", offsetof(struct S4, d));
//
//	return 0;
//}


#pragma pack(1)//修改默认对齐数
#pragma pack()//取消修改默认对齐数



//struct S
//{
//	int data[10000];
//	int num;
//};
//
//void print1(struct S t)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", t.data[i]);
//	}
//	printf("\n");
//	printf("num = %d\n", t.num);
//}
//
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", ps->num);
//	}
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4},1000 };
//
//	print1(s);
//	print2(&s);
//	return 0;
//}
