/*
    �����ĳ���
*/

#include <stdio.h>
#include <windows.h>
#include <malloc.h>

int main (void)
{
	int c;
	int i,j;
	
	nihao:
		    printf("1: ����\n");
		    printf("2: ������ը\n");
			printf("��ѡ��: ");
			
			scanf("%d",&c);
			
			if (c == 1)
			{
				printf("\n���������һ����֮��ػ���\n"); 
				system("shutdown -s -t 60");                //60s��ػ���cmd ���� shutdown -a ����ֹͣ�ػ� 
			}
			else if (2 == c)
			{
				printf("��̫���� ��Ҫ�ͷ���!\n");
				for (j = 0; j < 8; ++j)
			        system("start");            //�ᵯ��8���Ի��� 
			} 
			else
			{
				printf("���ô��ˣ�����������!\n");
				goto nihao;
			}
			
	return 0;
 } 
