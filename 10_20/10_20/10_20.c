#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//指针的初始化
//	int* ptr = NULL;//空指针
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	//p已指向10后边
//	//继续使用p的话，p就是野指针
//	p = NULL;
//
//	p = arr;//可以再次使用，指向某个地址
//
//	if (p != NULL)
//	{
//		//表示肯定指向了某个地址，可以使用他进行修改指向的值 
//	}
//
//	return 0;
//}

//#define NDEBUG//在debug环境下关闭，有助于调试，在release环境下开启，加快运行效率，VS在release环境下直接优化掉了
//#include<assert.h>
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//	assert(p != NULL);//符合不发生任何反馈，不符合报错
//}

//传值调用
//传址调用


//传址调用
//Swap(int* px, int* py)
//{
//	int z = 0;
//	z = * px;
//	*px = *py;
//	*py = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a, b);
//
//	Swap(&a, &b);
//
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d\n", i);

	return 0;
}


