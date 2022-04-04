#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int input = 0;
	printf("上大学之后\n");
	printf("要好好学习吗?\n");
	scanf("%d", &input);

	if (input == 1)
		printf("good offer\n");
	else
		printf("翻屋企耕田\n");*/
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