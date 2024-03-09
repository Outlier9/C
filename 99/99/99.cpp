#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1, b = 1;
	for ( a = 1; a < 10; a++)
	{
		for ( b = 1; b <= a; b++)
		{
			printf("%d*%d=%d\n",b,a,b*a);

		}
	}
	return 0;
}