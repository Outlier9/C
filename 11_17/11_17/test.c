#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//����10�����͵Ŀռ�
//		int* p = (int*) malloc(10 * sizeof(int));
//		if (p == NULL)
//		{
//			perror("malloc");
//			return 1;//��������0.�쳣����1
//		}
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		//��ӡ
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//
//
//		free(p);
//		p = NULL;
//	return 0;
//}


//int main()
//{
//	//calloc����ռ�Ĭ�ϻᱻ��ʼ��Ϊ0
//	//malloc����ռ䲻�ᱻ��ʼ��
//	int *p = (int*)calloc(10, sizeof(int));
//	//int *p = (int*)malloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	
//	int* p = (int*)malloc(5 * sizeof(int));
//	
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//��������Ķ����ڴ�
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//��������
//4.1 ��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//4.2 �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(20);//20�ֽ� -- 5������
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 20; i++)//Խ��
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//4.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p); //pΪ�Ƕ�̬���ٿռ䣬����ʹ��free�ͷ�
//	p = NULL;
//
//	return 0;
//}


//4.4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ���� -- err

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	free(p);//free��ʱ��p����ָ���ǿ�ռ����ʼλ��
//	p = NULL;
//
//	return 0;
//}


//4.5 ��ͬһ���ڴ����ͷ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;//��ֵ��ָ��Ϳ��Ա���
//	//�ٴ��ͷ�err
//	free(p);
//	return 0;
//}
//
//4.6 ��̬�����ڴ������ͷ�
//
//test()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return;
//	}
//	//ʹ��
//	if (5 == 2 + 3)
//	{
//		return;//�ڴ�й©��û���ͷ�ֱ��ͣ��
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//�����˳�
//	//7*24һֱ����
//	return 0;
//}

#include<string.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//
//}

//void Test(void) //err
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//1.��NULL���н����ò��������³������
//2.malloc����Ŀռ䣬û�л��ᣬ�����ڴ�й©

//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}





//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


void Test(void)
{
	char* str = (char*)malloc(100);

	strcpy(str, "hello");
	free(str);//str��ΪҰָ���ˣ�ָ������λ��
	str = NULL;//�����ÿ�
	if (str != NULL)//û��=NULL������һ������
	{
		strcpy(str, "world");//�Ƿ�����
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}



