#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	srand((unsigned int)time(0));
	int x, y;
	x = rand()%100 + 1;
        printf("\n\n\n--------------本程序要求输入一个1~100之间的数字并与电脑生成的随机数匹配--------------\n\n\n");
	do{
		printf("请输入：");
		scanf("%d", &y);
		if(x > y)
		{
			printf("small\n");
		}
		else if(x < y)
		{
			printf("big\n");
		}
		else
		{
			printf("guess current\n");
		}
	}
	while(y != x);
	return 0;
}
