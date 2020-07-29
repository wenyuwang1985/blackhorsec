#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //打印金字塔形*，共六行，每行*数量规律：1，3，5，7，9，11
    int i, j;
    //六层
    for(i = 0; i < 6; i++)
    {
	//-5 ~ 5模拟列的规律
        for(j = -5; j < 6; j++)
        {
	    //符合规律输出*
            if(abs(j) - i <= 0)
            {
                printf("*");
            }
	    //不符合规律输出空格
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

