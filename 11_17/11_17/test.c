#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//申请10个整型的空间
//		int* p = (int*) malloc(10 * sizeof(int));
//		if (p == NULL)
//		{
//			perror("malloc");
//			return 1;//正常返回0.异常返回1
//		}
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//打印
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//
//
//		free(p);
//		p = NULL;
//	return 0;
//}


//int main()
//{
//	//calloc申请空间默认会被初始化为0
//	//malloc申请空间不会被初始化
//	int *p = (int*)calloc(10, sizeof(int));
//	//int *p = (int*)malloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	
//	int* p = (int*)malloc(5 * sizeof(int));
//	
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//调整申请的堆上内存
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//常见错误
//4.1 对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//4.2 对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(20);//20字节 -- 5个整型
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 20; i++)//越界
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//4.3 对非动态开辟内存使用free释放
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p); //p为非动态开辟空间，不能使用free释放
//	p = NULL;
//
//	return 0;
//}


//4.4 使用free释放一块动态开辟内存的一部分 -- err

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	free(p);//free的时候，p必须指向那块空间的起始位置
//	p = NULL;
//
//	return 0;
//}


//4.5 对同一块内存多次释放

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//释放
//	free(p);
//	p = NULL;//赋值空指针就可以避免
//	//再次释放err
//	free(p);
//	return 0;
//}
//
//4.6 动态开辟内存忘记释放
//
//test()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return;
//	}
//	//使用
//	if (5 == 2 + 3)
//	{
//		return;//内存泄漏，没有释放直接停了
//	}
//	//释放
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//程序不退出
//	//7*24一直在跑
//	return 0;
//}

#include<string.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//
//}

//void Test(void) //err
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//1.对NULL进行解引用操作，导致程序崩溃
//2.malloc申请的空间，没有机会，导致内存泄漏

//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}





//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


void Test(void)
{
	char* str = (char*)malloc(100);

	strcpy(str, "hello");
	free(str);//str成为野指针了，指向其他位置
	str = NULL;//必须置空
	if (str != NULL)//没有=NULL，这里一定符合
	{
		strcpy(str, "world");//非法访问
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}



