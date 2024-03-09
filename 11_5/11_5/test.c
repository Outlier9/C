#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//
//
//	return 0;
//}


//struct Test {
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}; *p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式，从左向右依次计算，整个表达式结果是最后一个的结果，这一行表示{1,3,5}
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);//p[0] == *(p+0)
//	//printf("%p\n", a[0]);
//	return 0;
//}

//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}





int main() 
{
	char* c[] = {"ENTER","NEW","POINT","FIRSE"};
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp +3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}

