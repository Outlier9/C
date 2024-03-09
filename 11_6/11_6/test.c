#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<string.h>

//int main()
//{
//	int ret = islower('a');
//	//islower是用来判断字符是否是小写
//	//是小写字符返回非0数字
//	//不是小写字符返回0
//
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int ret = isupper('a');
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char str[] = "I am a student";
//	size_t len = strlen(str);
//	size_t i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (islower(str[i]))
//		{
//			str[i] = str[i] - 32;
//		}
//	}
//
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//
//	ch = tolower(ch);//ch = ch + 32
//	//ch = toupper(ch);//ch = ch - 32
//
//	printf("%c\n", ch);
//
//
//	return 0;
//}



//模拟实现strlen函数
#include <assert.h>
//方法1：
//size_t mystrlen1(const char* str)
//{
//	size_t count = 0;
//	assert(str != '\0');
//
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}



//方法2：
//int mystrlrn2(const char* str)
//{
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}


//方法3：递归
//my_strlen("abcdef")
//1+my_strlen("bcdef")
//1+1+my_strlen("cdef")
//1+1+1+my_strlen("def")
//1+1+1+1+my_strlen("ef")
//1+1+1+1+1+my_strlen("f")
//1+1+1+1+1+1+my_strlen("")
//1+1+1+1+1+1+0 = 6
//size_t mystrlen3(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + mystrlen3(str + 1);
//	}
//	else {
//		return 0;
//	}
//
//}


//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = mystrlen3(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "hello abc";
//	char arr2[20] = "xxxxxxxxxxxx";
//	strcpy(arr2, arr1);
//	//拷贝的时候会把\0也拷贝过去
//	//1.源字符串中必须包含、0，同时、0也会被拷贝到目标空间
//	//2.目标空间要足够大，能放得下拷贝过来的数据
//	//3.保证目标空间可修改
//	printf("%s\n", arr2);
//	return 0;
//}

//模拟实现strcpy
//void my_strcpy1(char* dest,char*src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy2(char* dest, char* src)
//{
	/*while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;*/

	//或者
	/*assert(dest);
	assert(src);
	while (*dest++ = *src++)
	{
		
	}*/
//}

//char* my_strcpy3(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++)
//	{
//
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	
//	my_strcpy(arr2, arr1);//两种
//	
//	printf("%s\n", arr2);
//	printf("%s\n", my_strcpy3(arr2, arr1));//链式访问
//	return 0;
//}

//strcat 字符串追加
//1.目标空间中得有\0（从哪里开始追加），源头字符串中得有\0（追加到什么时候结束）
//2.目标空间要足够大，目标要可以修改

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
	
}



int main()
{
	char arr[20] = "hello ";
	char* p = "world";

	//strcat(arr, p);
	my_strcat(arr, p); //尽量不要自己追加自己
	printf("%s\n", arr);
	return 0;
}


