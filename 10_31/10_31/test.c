#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	const char* p = "abcdefghi";  //�洢�Ļ�����Ԫ�ص�ַ
//	//"abcdefghi"��һ�������ַ��������ܱ��޸�
//	//*p = 'q'; err������ָ������ǰ��const���������޸Ŀ���֪�����������
//	printf("%s", p);//ʹ��%s,����Ҫ��*
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
	//���ں���ָ�룬&Add��Add��ӡ�����Ķ��ǵ�ַ

	int(*pf)(int, int) = &Add;
	return 0;
}