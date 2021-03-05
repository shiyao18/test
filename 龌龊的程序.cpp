/*
    龌龊的程序
*/

#include <stdio.h>
#include <windows.h>
#include <malloc.h>

int main (void)
{
	int c;
	int i,j;
	
	nihao:
		    printf("1: 死机\n");
		    printf("2: 机房爆炸\n");
			printf("请选择: ");
			
			scanf("%d",&c);
			
			if (c == 1)
			{
				printf("\n计算机将在一分钟之后关机！\n"); 
				system("shutdown -s -t 60");                //60s后关机，cmd 命令 shutdown -a 即可停止关机 
			}
			else if (2 == c)
			{
				printf("你太坏了 我要惩罚你!\n");
				for (j = 0; j < 8; ++j)
			        system("start");            //会弹出8个对话框 
			} 
			else
			{
				printf("你敲错了，请重新输入!\n");
				goto nihao;
			}
			
	return 0;
 } 
