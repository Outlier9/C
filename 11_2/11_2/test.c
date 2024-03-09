#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

Swap(char* buf1, char* buf2, size_t width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}



void bubble_sort(void* base,size_t sz,size_t width, int(*cmp)(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[] = { 3,1,5,2,4,8,7,6,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz,sizeof(arr[0]),cmp_int);
	print_arr(arr, sz);
}

int cmp_stu_by_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name - ((struct Stu*)e2)->name);
}

//测试排序结构体数据
void test2()
{
	struct Stu arr2[] = { {"zhangsan",15},{"lisi",35},{"wangwu",32} };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	//bubble_sort(arr2, sz, sizeof(arr2[0]), cmp_stu_by_age);
	bubble_sort(arr2, sz, sizeof(arr2[0]), cmp_stu_by_age);
}

int main()
{

	test2();

	return 0;
}

