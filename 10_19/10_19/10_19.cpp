#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	double d = 10.0;
//	double* dc = &d;
//
//	float f = 10.0;
//	float* fc = &f;
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(dc));
//	printf("%d\n", sizeof(fc)); //ָ���С����32λ�����£�����4����64λ�����£�����8
//
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//
//	int* p = &n;
//	*p = 0;
//
//	/*char* pc = (char*)&n;
//	*pc = 0;
//
////	printf("%d\n", n);
//	printf("%d\n", &n);
//	printf("%d\n", pc);
//	printf("%d\n", *pc);*/
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(arr) ��ʾ����������ֽ�����sizeof(arr[0]) ��ʾ������ÿ��Ԫ�ص��ֽ�����
//	//ͨ��������������ֽ�������ÿ��Ԫ�ص��ֽ��������Եõ������е�Ԫ�ظ�����
//	printf("%d\n", sz);
//
//	return 0;
//}


//const���α���-----����*���
//const����ָ��-----����*�ұ�

//int main()
//{
//	const int n = 100; 
//	//n = 20;  //const���κ��ܸ�
//
//	int* p = &n;
//	*p = 20;//��ָ����Ը�
//
//	printf("%d\n", n);
//
//	return 0;
//}


int main()
{
	int m = 100;
	int n = 10;

	const int* p = &n; //���Ƶ���ָ��ָ������ݣ�����ͨ��ָ�����޸�ָ��ָ������ݣ������֮��ָ����ָ�����ݲ��ܱ䣬����ָ�뻹����ָ���
	int* const p = &n; //���Ƶ���ָ�뱾�������޸�ָ�������ָ�򣬵��ǿ����޸�ָ��ָ�������,�����֮��ָ��ָ��ĵ�ַ���ܱ�

	//*p = 0;
	//p = &m;

	return 0;
}





