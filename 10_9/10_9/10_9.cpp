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
		printf("\n�㻹��%d�β����ֵĻ���\n", count);
		printf("��������µ����֣�");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else {
			printf("��ϲ��µ���\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("���������ˣ���ȷ������%d\n",r);
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
		printf("\n��ѡ��>��");
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
			printf("����������������룺\n");
			break;
		}
	} while (input);
	return 0;
}
