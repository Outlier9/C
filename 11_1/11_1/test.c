#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//int* arr[10]; //整形指针的数组
//	int (*p1)(int, int) = Add;
//	int (*p2)(int, int) = Sub;
//
//	//函数指针数组
//	int (*pArr[4])(int, int) = { Add, Sub };
//
//	return 0;
//}

void menu()
{
	printf("********************************\n");
	printf("*******  1.add   2.sub  ********\n");
	printf("*******  3.mul   4.div  ********\n");
	printf("*******      0.exit     ********\n");
	printf("********************************\n");
}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Del(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Del(x, y);
//			printf("%d\n", ret);
//
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//			
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Del(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Del };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}






int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;

	printf("请输入2个操作数：>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}


int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		}

	} while (input);

	return 0;
}