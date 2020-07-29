#include <stdio.h>
#include <math.h>

int main()
{
	//打印100以内的水仙花数
	int i;
	for(i = 100; i < 1000; i++)
	{
		//水仙花数满足每一位的次方和等于该数本身
		if(pow(i%100/10, 3) + pow(i/100, 3) + pow(i%10, 3) == i)
		{
			printf("%d是水仙花数\n", i);
		}
	} 
	return 0;
}
