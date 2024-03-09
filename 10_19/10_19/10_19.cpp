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
//	printf("%d\n", sizeof(fc)); //指针大小，在32位环境下，就是4，在64位环境下，就是8
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
//	//sizeof(arr) 表示整个数组的字节数，sizeof(arr[0]) 表示数组中每个元素的字节数。
//	//通过将整个数组的字节数除以每个元素的字节数，可以得到数组中的元素个数。
//	printf("%d\n", sz);
//
//	return 0;
//}


//const修饰变量-----放在*左边
//const修饰指针-----放在*右边

//int main()
//{
//	const int n = 100; 
//	//n = 20;  //const修饰后不能改
//
//	int* p = &n;
//	*p = 20;//用指针可以改
//
//	printf("%d\n", n);
//
//	return 0;
//}


int main()
{
	int m = 100;
	int n = 10;

	const int* p = &n; //限制的是指针指向的内容，不能通过指针来修改指针指向的内容，简而言之，指针所指的内容不能变，但是指针还可以指别的
	int* const p = &n; //限制的是指针本身，不能修改指针变量的指向，但是可以修改指针指向的内容,简而言之，指针指向的地址不能变

	//*p = 0;
	//p = &m;

	return 0;
}





