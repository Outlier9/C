#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//比较两个字符
//	int ret = strcmp("abcdef", "abq");
//
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	printf("%d\n", ret);
//	return 0;
//}
#include<assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//	//return *s1 - *s2;也可以，但是返回不是-1
//}
//
//
//int main()
//{
//	int ret = my_strcmp("ab", "abc");
//	printf("%d\n", ret);
//	return 0;
//}




//int main()
//{
//	char arr1[10] = "xxxxxxxxx";
//	char arr2[] = "abcdef";
//	strncpy(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	char arr[] = "1981946238@qq.com";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//	char* p = "@.";
//
//	/*char *s = strtok(buf, p);
//	printf("%s\n", s);
//
//	s = strtok(NULL, p);
//	printf("%s\n", s);*/
//
//	char* r = NULL;
//	for (r = strtok(buf, p); r != NULL; r = strtok(NULL, p))
//	{
//		printf("%s\n",r);
//	}
//
//	return 0;
//}


//strstr实现
//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	const char* cp = str1;
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//
//	if (*str2 == '\0')
//		return str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//
//	return 0;
//}




//strerror函数实现




//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		char* ret = strerror(i);
//		printf("%d:%s\n", i, ret);
//	}
//	return 0;
//}

#include<errno.h>
//int main() {
//	FILE* pf = fopen("add.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败，失败的原因：%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功");
//	}
//
//	return 0;
//}


//memcpy实现
my_memcpy(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		
		//拷贝一个字节
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

 int main()
 {
	 int arr1[10] = { 0 };
	 int arr2[] = { 1,2,3,4,5,6,7,8 };
	 my_memcpy(arr1, arr2, 20);//20个字节，5个整型
	 int i = 0;
	 for (i = 0; i < 10; i++)
	 {
		 printf("%d", arr1[i]);
	 }

	 char arr3[] = "xxxxxxx";
	 char arr4[] = "yyyyyy";
	 memcpy(arr3, arr4, 3);
	 return 0;
 }