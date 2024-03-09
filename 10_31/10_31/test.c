#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	const char* p = "abcdefghi";  //存储的还是首元素地址
//	//"abcdefghi"是一个常量字符串，不能被修改
//	//*p = 'q'; err报错，在指针类型前加const，若进行修改可以知道具体的问题
//	printf("%s", p);//使用%s,不需要用*
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", p);
//		printf("%d ", arr);
//		printf("%d ", arr[i]);
//		printf("\n");
//
//	}
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}


int main()
{
	printf("p\n", &Add);
	printf("p\n", Add);
	//对于函数指针，&Add和Add打印出来的都是地址

	int(*pf)(int, int) = &Add;
	return 0;
}