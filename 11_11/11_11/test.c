#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//memmove实现
//void* my_memmove(const void* dest, const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//memset,以字节为单位设置内存值
int main()
{
	char arr[] = "hello bit";

	//memset(arr, 'x', 5);
	memset(arr + 6, 'x', 3);
	printf("%s\n", arr);
	return 0;
}

