#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<string.h>

//int main()
//{
//	int ret = islower('a');
//	//islower�������ж��ַ��Ƿ���Сд
//	//��Сд�ַ����ط�0����
//	//����Сд�ַ�����0
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



//ģ��ʵ��strlen����
#include <assert.h>
//����1��
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



//����2��
//int mystrlrn2(const char* str)
//{
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}


//����3���ݹ�
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
//	//������ʱ����\0Ҳ������ȥ
//	//1.Դ�ַ����б��������0��ͬʱ��0Ҳ�ᱻ������Ŀ��ռ�
//	//2.Ŀ��ռ�Ҫ�㹻���ܷŵ��¿�������������
//	//3.��֤Ŀ��ռ���޸�
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ��ʵ��strcpy
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

	//����
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
//	my_strcpy(arr2, arr1);//����
//	
//	printf("%s\n", arr2);
//	printf("%s\n", my_strcpy3(arr2, arr1));//��ʽ����
//	return 0;
//}

//strcat �ַ���׷��
//1.Ŀ��ռ��е���\0�������￪ʼ׷�ӣ���Դͷ�ַ����е���\0��׷�ӵ�ʲôʱ�������
//2.Ŀ��ռ�Ҫ�㹻��Ŀ��Ҫ�����޸�

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
	my_strcat(arr, p); //������Ҫ�Լ�׷���Լ�
	printf("%s\n", arr);
	return 0;
}


