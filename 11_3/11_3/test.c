#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%zd",sizeof(a));
//  return 0;
//}

#include<string.h> 
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", strlen(arr));
//	printf("%zd", sizeof(arr));
//
//	return 0;
//}


//һά����
//int main()
//{
//	int a[] = { 1,2,3,4};
//
//	printf("%zd\n", sizeof(a));  //16
//	printf("%zd\n", sizeof(a+0)); //8 ������a��û�е�������sizeof�ڲ���Ҳû��&������a����������Ԫ�ص�ַ����ַ��С��4/8���ֽ�
//	printf("%zd\n", sizeof(*a));//4 a����������Ԫ�صĵ�ַa==&a[0]��*a��ʵ���ǵ�һ��Ԫ�أ�Ҳ����a[0],��С��4���ֽ�
//	printf("%zd\n", sizeof(a+1));//8 a����������Ԫ�صĵ�ַ(&a[0] --int*),a+1-->&a[1],a+1���ǵڶ���Ԫ�صĵ�ַ
//	printf("%zd\n", sizeof(a[1]));//4 �����2��Ԫ�صĴ�С����λ���ֽ�4
//	printf("%zd\n", sizeof(&a));//8 &aȥ����������ĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(*&a));//16
//	printf("%zd\n", sizeof(&a+1));//8 ����һ�����飬ָ�������ߵĵ�ַ
//	printf("%zd\n", sizeof(&a[0]));//8 ��Ԫ�ص�ַ 4/8
//	printf("%zd\n", sizeof(&a[0]+1));//8 �ڶ���Ԫ�ص�ַ
//
//}

//�ַ�����
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4 arr��������Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ��*arr������Ԫ�أ���վһ���ַ���С����1���ֽ�
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]��������ĵڶ���Ԫ�أ���С��1���ֽ�
//	printf("%d\n", sizeof(&arr));//4 &arr������ĵ�ַ����С��4/8
//	printf("%d\n", sizeof(&arr + 1));//4 &arr+1�������������飬ָ��f�ĺ���
//	printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[0]����Ԫ�صĵ�ַ��&arr[0]+1���ǵڶ���Ԫ�صĵ�ַ4/8
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%zd\n", strlen(arr));//���ֵ��û�и���\0׼ȷλ��
//	printf("%zd\n", strlen(arr + 0));//���ֵ
//	//printf("%zd\n", strlen(*arr));//*arr --> 'a' --97 // �Ƿ����� -err
//	//printf("%zd\n", strlen(arr[1]));//'b' -> 98 // err
//	printf("%zd\n", strlen(&arr));//���ֵ
//	printf("%zd\n", strlen(&arr + 1));//���ֵ
//	printf("%zd\n", strlen(&arr[0] + 1));//���ֵ 
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr));//7
//	printf("%zd\n", sizeof(arr + 0));//arr��ʾ������Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ����С����4/8
//	printf("%zd\n", sizeof(*arr));//arr��ʾ������Ԫ�صĵ�ַ��*arr������Ԫ�����ڽ�걣���С����1�ֽ�
//	printf("%zd\n", sizeof(arr[1]));//arr[1]�ǵڶ���Ԫ�أ���СҲ��1�ֽ�
//	printf("%zd\n", sizeof(&arr));//����ĵ�ַ����С����4/8
//	printf("%zd\n", sizeof(&arr + 1));//��������������Ǹ���ַ
//	printf("%zd\n", sizeof(&arr[0] + 1));// �ڶ���Ԫ�صĵ�ַ����С��4/8
//
//	return 0;
//}



//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", strlen(arr));//6 arr����Ԫ�ص�ַ
//	printf("%zd\n", strlen(arr + 0));//arr��ʾ������Ԫ�ص�ַ
//	//printf("%zd\n", strlen(*arr));//err - �Ƿ�����
//	//printf("%zd\n", strlen(arr[1]));//err - �Ƿ�����
//	printf("%zd\n", strlen(&arr));//����ĵ�ַ���������ַҲ��ָ���������ʼλ�õģ�strlen�ʹ���ʼλ�ÿ�ʼ�����\0
//	printf("%zd\n", strlen(&arr + 1));//���������������ĵ�ַ�������￪ʼ�����\0���������ֵ
//	printf("%zd\n", strlen(&arr[0] + 1));// �ڶ���Ԫ�صĵ�ַ��������5
//
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//
//	printf("%lld\n", sizeof(p));//p��һ��ָ���������С��4/8���ֽ�
//	printf("%lld\n", sizeof(p + 1));//p+1�ǡ�b'�ĵ�ַ����С��4/8���ֽ�
//	printf("%lld\n", sizeof(*p));//*p�����ַ�����С��1�ֽ�
//	printf("%lld\n", sizeof(p[0]));//p[0] == *(p+0),��ʵ�����ַ����е����ַ�����С��1�ֽ�
//	printf("%lld\n", sizeof(&p));//&p��p�ĵ�ַ��Ҳ�ǵ�ַ����ַ��С����4/8���ֽ�
//	printf("%lld\n", sizeof(&p + 1));//&p+1Ҳ�ǵ�ַ��&p+1������p������ĵ�ַ
//	printf("%lld\n", sizeof(&p[0] + 1));// &p[0] + 1��b�ĵ�ַ��4/8
//
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//
//	printf("%lld\n", strlen(p));//6 �ַ�������\0,p�д�ŵ�����Ԫ�صĵ�ַ
//	printf("%lld\n", strlen(p + 1));//5
//	//printf("%lld\n", strlen(*p));//err
//	//printf("%lld\n", strlen(p[0]));//err
//	printf("%lld\n", strlen(&p));//���ֵ
//	printf("%lld\n", strlen(&p + 1));//���ֵ
//	printf("%lld\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}



//��ά����


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 �������������ά����Ĵ�С����λ���ֽ�-48
//	printf("%d\n", sizeof(a[0][0]));//4 a[0][0]�ǵ�һ�е�һ��Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a[0]));//16 a[[0]��ʵ���ǵ�һ�е��������������һ�е�����������������sizeof�ڲ���������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0]+1));//4 a[0]�ǵ�һ�������������������������������ǵ�������sizeof�ڲ���������������ʾ��Ԫ�صĵ�ַ��Ҳ����a[0][0]�ĵ�ַ��a[0]+1�ǵ�һ�еڶ���Ԫ�أ�a[0][1]���ĵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(*(a[0]+1)));//4 a[0]+1�ǵ�һ�еڶ���Ԫ�أ�a[0][1]���ĵ�ַ��*��a[0]+1�����ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a+1));//4 aû�е�������sizeof�ڲ���û��&��������a������Ԫ�صĵ�ַ��Ҳ���ǵ�һ�еĵ�ַ��a+1�����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(a[1]));//16
//	printf("%d\n", sizeof(&a[0]+1));//4
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 4/8��a[0]�ǵ�һ�е���������&a[0]ȥ�����ǵ�һ�еĵ�ַ��&a[0]+1�õ��ľ��ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*a));//16 ������a����������Ԫ�صĵ�ַ��Ҳ���ǵ�һ�еĵ�ַ��*a����һ�еģ�*a == *(a+0) == a[0]
//	printf("%d\n", sizeof(a[3]));//16 a[3] -- arr[0]
//
//
//	return 0;
//}






