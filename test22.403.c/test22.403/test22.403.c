#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int input = 0;
	printf("�ϴ�ѧ֮��\n");
	printf("Ҫ�ú�ѧϰ��?\n");
	scanf("%d", &input);

	if (input == 1)
		printf("good offer\n");
	else
		printf("���������\n");*/
	int line = 0;
	while (line < 100)
	{
		printf("write code%d\n", line);
		line++;
	}
	if (line == 100)
	{
		printf("get a nice offer\n");
	}
	return 0;
}