#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");//˫����
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	fputc('q', pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('b', stdout);//stdout -- ��׼�����
//	fputc('i', stdout);
//	fputc('t', stdout);
//	return 0;
//}

//ʹ��fgetc�ӱ�׼�������ж�ȡ����
//int main()
//{
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//˫����
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n",ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%d\n", ch);  //��ȡ����������eof��-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//�ļ��Ŀ���
//int main()
//{
//	FILE* pfread = fopen("data1.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen-1");
//		return 1;
//
//	}
//	FILE* pfwrite = fopen("data2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen-2");
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//
//	//���ļ� - д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "w");//˫����
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//дһ��
//	fputs("hello world\n",pf);
//	fputs("hello world\n",pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//˫����
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char arr[20] = { 0 };
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};

//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//	/*FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}*/
//	//д�ļ�
//	//fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.f, s.arr);
//
//	/*fclose(pf);
//	pf = NULL;*/
//
//	return 0;
//}


//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	scanf("%d %f %s", &(s.n), &(s.f), s.arr);
//	printf("%d %f %s", s.n, s.f, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//scanf - ��Ա�׼��������stdin���ĸ�ʽ�����뺯��
//scanf - ��Ա�׼�������stdout���ĸ�ʽ���������

//fscanf - ��������������ĸ�ʽ�����뺯��
//fpeintf - �������������ĸ�ʽ���������


