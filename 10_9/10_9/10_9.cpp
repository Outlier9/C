#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Guess number

void game() 
{
	int guess;
	int count = 7;
	int r = 0;
	r = rand()%100 + 1;


	while (count)
	{
		printf("\n你还有%d次猜数字的机会\n", count);
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else {
			printf("恭喜你猜到了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("机会用完了，正确数字是%d\n",r);
	}
}

void menu()
{
	printf("\n**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}

int main()
{
	int input;
	srand((unsigned int) time(NULL));

	do {
		menu();
		printf("\n请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
	return 0;
}
