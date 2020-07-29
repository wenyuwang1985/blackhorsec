#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//简化gcc，格式：mygcc a.c
	if(argc != 2)
	{
		printf("参数数量不匹配");
		return -1;
	}
	char arr[1000];	
	char temp[256];
	strcpy(arr, "gcc -o ");
	strcpy(temp, argv[1]);
	//取出文件名（去除扩展名）
	char *p = strtok(temp, ".");
	//将格式连接到arr上
	strcat(arr, p);
	strcat(arr, " ");
	strcat(arr, argv[1]);
	system(arr);
	return 0;	
}
