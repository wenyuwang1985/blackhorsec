#include <stdio.h>

int arrMaxIndex(int *p, int arrLength)
{
	int i, tempNum = 0, maxIndex = 0;
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
		
