#include<stdio.h>
int main()
{
	int input;
	int number;
	printf("請輸入十個數字, 用空格隔開\n");
	for(number=0;number<=10;number++)
	{
		scanf("%d",&input);
		printf("您輸入的數字為:%d\n",input);
	}
	
	return 0;
}
