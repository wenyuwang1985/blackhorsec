#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        //双色球，红球6个，范围是1-33，且不能重复，蓝球1个，范围是1-16，打印中奖信息
        int redBall[6];
        int blueBall;
        srand((unsigned int)time(NULL));
        int i, j;
        //为红球赋值
        for(i = 0; i < 6; i++)
        {
                redBall[i] = rand()%33 + 1;
                //去重复
                for(j = 0; j < i; j++)
                {
                        if(redBall[i] == redBall[j])
                        {
                                --i;
                                continue;
                        }
                }
        }
        blueBall = rand()%16 + 1;


            //为红球排序
            for(i = 0; i < 6; i++)
            {
                for(j = 0; j < 6 - i - 1; j++)
                {
                    if(redBall[j] > redBall[j + 1])
                    {
                        redBall[j] = redBall[j] + redBall[j+1];
                        redBall[j+1] = redBall[j] - redBall[j+1];
                        redBall[j] = redBall[j] - redBall[j+1];
                    }
                }
            }
            //打印中奖信息
            for(i = 0; i < 6; i++)
            {
                printf("%d      ", redBall[i]);
            }
            printf("+       %d\n", blueBall);


        return 0;
}
