#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	const int n = 100; 
	//n = 20;  //const���κ��ܸ�

	int* p = &n;
	*p = 20;//��ָ����Ը�

	printf("%d\n", n);

	return 0;
}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = arr;//����������������Ԫ�صĵ�ַ
//	while (p < arr + sz)  //ָ���ϵ������
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//
//	for (i = 0; i <10; i++)
//	{
//		*(p++) = i;
//		//*p
//		//p=p+1
//	}
//	
//	return 0;
//}
