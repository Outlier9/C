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


//一维数组
//int main()
//{
//	int a[] = { 1,2,3,4};
//
//	printf("%zd\n", sizeof(a));  //16
//	printf("%zd\n", sizeof(a+0)); //8 数组名a并没有单独放在sizeof内部，也没有&，所以a就是数组首元素地址，地址大小是4/8个字节
//	printf("%zd\n", sizeof(*a));//4 a就是数组首元素的地址a==&a[0]，*a其实就是第一个元素，也就是a[0],大小是4个字节
//	printf("%zd\n", sizeof(a+1));//8 a就是数组首元素的地址(&a[0] --int*),a+1-->&a[1],a+1就是第二个元素的地址
//	printf("%zd\n", sizeof(a[1]));//4 计算第2个元素的大小，单位是字节4
//	printf("%zd\n", sizeof(&a));//8 &a去除的是数组的地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(*&a));//16
//	printf("%zd\n", sizeof(&a+1));//8 跳过一个数组，指向数组后边的地址
//	printf("%zd\n", sizeof(&a[0]));//8 首元素地址 4/8
//	printf("%zd\n", sizeof(&a[0]+1));//8 第二个元素地址
//
//}

//字符数组
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4 arr是数组首元素地址，arr+0还是首元素地址，是地址就是4/8
//	printf("%d\n", sizeof(*arr));//1 arr是首元素地址，*arr就是首元素，就站一个字符大小就是1个字节
//	printf("%d\n", sizeof(arr[1]));//1 arr[1]就是数组的第二个元素，大小是1个字节
//	printf("%d\n", sizeof(&arr));//4 &arr是数组的地址，大小事4/8
//	printf("%d\n", sizeof(&arr + 1));//4 &arr+1是跳过整个数组，指向f的后面
//	printf("%d\n", sizeof(&arr[0] + 1));//4 &arr[0]是首元素的地址，&arr[0]+1就是第二个元素的地址4/8
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%zd\n", strlen(arr));//随机值，没有给出\0准确位置
//	printf("%zd\n", strlen(arr + 0));//随机值
//	//printf("%zd\n", strlen(*arr));//*arr --> 'a' --97 // 非法访问 -err
//	//printf("%zd\n", strlen(arr[1]));//'b' -> 98 // err
//	printf("%zd\n", strlen(&arr));//随机值
//	printf("%zd\n", strlen(&arr + 1));//随机值
//	printf("%zd\n", strlen(&arr[0] + 1));//随机值 
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr));//7
//	printf("%zd\n", sizeof(arr + 0));//arr表示数组首元素地址，arr+0还是首元素地址，大小就是4/8
//	printf("%zd\n", sizeof(*arr));//arr表示数组首元素的地址，*arr就是首元素艘在建瓯，大小就是1字节
//	printf("%zd\n", sizeof(arr[1]));//arr[1]是第二个元素，大小也是1字节
//	printf("%zd\n", sizeof(&arr));//数组的地址，大小就是4/8
//	printf("%zd\n", sizeof(&arr + 1));//跳过整个数组的那个地址
//	printf("%zd\n", sizeof(&arr[0] + 1));// 第二个元素的地址，大小是4/8
//
//	return 0;
//}



//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", strlen(arr));//6 arr是首元素地址
//	printf("%zd\n", strlen(arr + 0));//arr表示数组首元素地址
//	//printf("%zd\n", strlen(*arr));//err - 非法访问
//	//printf("%zd\n", strlen(arr[1]));//err - 非法访问
//	printf("%zd\n", strlen(&arr));//数组的地址，但这个地址也是指向数组的起始位置的，strlen就从起始位置开始向后找\0
//	printf("%zd\n", strlen(&arr + 1));//是跳过整个数组后的地址，从这里开始向后找\0，就是随机值
//	printf("%zd\n", strlen(&arr[0] + 1));// 第二个元素的地址，长度是5
//
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//
//	printf("%lld\n", sizeof(p));//p是一个指针变量，大小是4/8个字节
//	printf("%lld\n", sizeof(p + 1));//p+1是‘b'的地址，大小是4/8个字节
//	printf("%lld\n", sizeof(*p));//*p是首字符，大小是1字节
//	printf("%lld\n", sizeof(p[0]));//p[0] == *(p+0),其实就是字符串中的首字符，大小是1字节
//	printf("%lld\n", sizeof(&p));//&p是p的地址，也是地址，地址大小就是4/8个字节
//	printf("%lld\n", sizeof(&p + 1));//&p+1也是地址，&p+1是跳过p变量后的地址
//	printf("%lld\n", sizeof(&p[0] + 1));// &p[0] + 1是b的地址，4/8
//
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//
//	printf("%lld\n", strlen(p));//6 字符串中有\0,p中存放的是首元素的地址
//	printf("%lld\n", strlen(p + 1));//5
//	//printf("%lld\n", strlen(*p));//err
//	//printf("%lld\n", strlen(p[0]));//err
//	printf("%lld\n", strlen(&p));//随机值
//	printf("%lld\n", strlen(&p + 1));//随机值
//	printf("%lld\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}



//二维数组


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 计算的是整个二维数组的大小，单位是字节-48
//	printf("%d\n", sizeof(a[0][0]));//4 a[0][0]是第一行第一个元素，大小是4个字节
//	printf("%d\n", sizeof(a[0]));//16 a[[0]其实就是第一行的数组名，这里第一行的数组名单独放在了sizeof内部，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0]+1));//4 a[0]是第一行这个数组的数组名，但是数组名并非单独放在sizeof内部，所以数组名表示首元素的地址，也就是a[0][0]的地址，a[0]+1是第一行第二个元素（a[0][1]）的地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(*(a[0]+1)));//4 a[0]+1是第一行第二个元素（a[0][1]）的地址，*（a[0]+1）就是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a+1));//4 a没有单独放在sizeof内部，没有&，数组名a就是首元素的地址，也就是第一行的地址，a+1，就是第二行的地址
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(a[1]));//16
//	printf("%d\n", sizeof(&a[0]+1));//4
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 4/8，a[0]是第一行的数组名，&a[0]去除的是第一行的地址，&a[0]+1得到的就是第二行的地址
//	printf("%d\n", sizeof(*a));//16 数组名a就是数组首元素的地址，也就是第一行的地址，*a就是一行的，*a == *(a+0) == a[0]
//	printf("%d\n", sizeof(a[3]));//16 a[3] -- arr[0]
//
//
//	return 0;
//}






