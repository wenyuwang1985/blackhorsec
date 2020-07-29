#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//输入数字判断是否与随机数相等
	srand((unsigned int)time(0));
	int x, y;
	x = rand()%100 + 1;
        printf("\n\n\n--------------本程序要求输入一个1~100之间的数字并与电脑生成的随机数匹配--------------\n\n\n");
	do{
		printf("请输入：");
		scanf("%d", &y);
		//若输入数字小于随机数，输出small，并重新输入
		if(x > y)
		{
			printf("small\n");
		}
		//若输入数字大于随机数，输出big，并重新输入
		else if(x < y)
		{
			printf("big\n");
		}
		//等于，输出猜对，程序结束
		else
		{
			printf("guess current\n");
		}
	}
	while(y != x);
	return 0;
}
