#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");//双引号
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fputc('q', pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('b', stdout);//stdout -- 标准输出流
//	fputc('i', stdout);
//	fputc('t', stdout);
//	return 0;
//}

//使用fgetc从标准输入流中读取数据
//int main()
//{
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");//双引号
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n",ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%d\n", ch);  //读取不到，返回eof，-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//文件的拷贝
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
//	//读文件 - 写文件
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "w");//双引号
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行
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
//	FILE* pf = fopen("data.txt", "r");//双引号
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
//	//写文件
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
//	//读文件
//	scanf("%d %f %s", &(s.n), &(s.f), s.arr);
//	printf("%d %f %s", s.n, s.f, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//scanf - 针对标准输入流（stdin）的格式化输入函数
//scanf - 针对标准输出流（stdout）的格式化输出函数

//fscanf - 针对所有输入流的格式化输入函数
//fpeintf - 针对所有输出流的格式化输出函数


