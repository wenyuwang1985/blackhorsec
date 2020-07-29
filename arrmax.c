#include <stdio.h>

//该函数接收数组及其长度，返回数组最大元素下标
int arrMaxIndex(int *p, int arrLength)
{
	int i, tempNum = 0, maxIndex = 0;
	//获取最大数下标
	for(i = 0; i < arrLength; i++)
	{
		if(tempNum < *(p+i))
		{
			tempNum = *(p+i);
			maxIndex = i;
		}
	}
	return maxIndex;
}

int main()
{
	int arr01[] = { 1, 9, 6, 4, 3, 2, 5, 10, 8, 7 };
	printf("最大元素的下标为：%d\n", arrMaxIndex(arr01, 10));
	return 0;
}
		
