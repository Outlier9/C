#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ��ĳ�ʼ��
//	int* ptr = NULL;//��ָ��
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
//	//p��ָ��10���
//	//����ʹ��p�Ļ���p����Ұָ��
//	p = NULL;
//
//	p = arr;//�����ٴ�ʹ�ã�ָ��ĳ����ַ
//
//	if (p != NULL)
//	{
//		//��ʾ�϶�ָ����ĳ����ַ������ʹ���������޸�ָ���ֵ 
//	}
//
//	return 0;
//}

//#define NDEBUG//��debug�����¹رգ������ڵ��ԣ���release�����¿������ӿ�����Ч�ʣ�VS��release������ֱ���Ż�����
//#include<assert.h>
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//	assert(p != NULL);//���ϲ������κη����������ϱ���
//}

//��ֵ����
//��ַ����


//��ַ����
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


