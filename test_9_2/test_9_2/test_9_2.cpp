#define _CRT_SECURE_NO_WARNINGS 1
//��newc++file.cpp�ļ�������޸�
#include <stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//int main() {
//	char a;
//	scanf_s("%c", &a, sizeof(a));
//	printf("there are %c apples", a);  //ռλ��
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%-5d", 123);
//	printf("%5d\n", 1234567);
//	printf("%f\n", 123.45);//Ĭ��С������ӡ��λ��������0
//	printf("%12f\n",123.45);//��߲��ո�
//	printf("%+d\n", -12);
//	printf("%6.2f\n", 0.5);//���ٴ�ӡ6λ��С�����2λ
//	printf("%*.*f\n", 6, 2, 0.5);//��ͬ����һ��
//	printf("%.5s\n", "hello world");//�ַ����Ĵ�ӡ
//	return 0;
//}

//#pragma warning(disable:4996)
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);//&ȡ��ַ
//	printf("%d", score);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


int main()
{
	int i,j,k = 0;
	int a = 0;
	scanf("%d %d %d", &i, &j, &k);
	if (i < j){
		a = i;
		i = j;
		j = a;
	}
	if (i < k){
		a = i;
		i = k;
		k = a;
	}
	if (j < k){
		a = j;
		j = k;
		k = a;
	}
	printf("%d %d %d", i, j, k);
	return 0;
}


