/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/09/09 08:24
	Description: ѧ���ɼ�����ϵͳ-������洢ѧ����Ϣ 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	float math_score[5], Chinese_score[5], English_score[5], average_score[5];
	char name[5][30];
	int rank[5];       // ���� 
	char grade[5];      // �ȼ� 
	int flag, i, j;
	float temp;
	char tempgrade;
	char string[30];
	
	printf("*****************��ӭ����ѧ������ϵͳ*******************\n");
	while (1)
	{
		printf("**********************************************************\n");
		printf("������˵�ѡ��:\n");
		printf("0 �˳�ϵͳ\n");
		printf("1 ����ѧ����Ϣ\n");
		printf("2 ���ѧ����Ϣ\n");
		printf("3 ���ݾ�������\n");
		printf("**********************************************************\n");
		scanf("%d", &flag);
		
		switch (flag)
		{
			case 1:
				for (i=0; i<5; i++)
				{
					printf("������������\n");
					scanf("%s", name[i]);
					printf("������ɼ�������ʽΪ:��ѧ�����ġ�Ӣ�\n");
					scanf("%f %f %f", &math_score[i], &Chinese_score[i], &English_score[i]);
					average_score[i] = (math_score[i] + Chinese_score[i] + English_score[i]) / 3;
					if ((average_score[i]>=90) && (average_score[i]<=100))
					{
						grade[i] = 'A';
					}
					else if ((average_score[i]>=80) && (average_score[i]<=90))
					{
						grade[i] = 'B';
					}
					else if ((average_score[i]>=70) && (average_score[i]<=80))
					{
						grade[i] = 'C';
					}
					else if ((average_score[i]>=60) && (average_score[i]<=70))
					{
						grade[i] = 'D';
					}
					else if ((average_score[i]>=0)) 
					{
						grade[i] = 'E';
					}
					else 
					{
						printf("�������\n");
					}
					rank[i] = 0;      // δ����ʱ���ζ���0 
					getchar();
				}
				break;
			case 2:
				printf("----------------------------------------------------\n");
				printf("|����|��ѧ�ɼ�|���ĳɼ�|Ӣ��ɼ�|ƽ���ɼ�|�ȼ�|����|\n");
				for (i=0; i<5; i++)
				{
					printf("----------------------------------------------------\n");
					printf("|%-4s|%-8.2f|%-8.2f|%-8.2f|%-8.2f|%-4c|%-4d|\n", name[i], math_score[i], Chinese_score[i], English_score[i], average_score[i], grade[i], rank[i]);
				}
				printf("----------------------------------------------------\n");
				break;
			case 3:      //ð������ 
				for (i=0; i<4; i++)       // �������ݣ���4�� 
				{
					for (j=0; j<4-i; j++)
					{
						if (average_score[j] < average_score[j+1])
						{  // ��j��ѧ������Ϣ�͵�j+1��ѧ������Ϣ���� 
							temp = math_score[j];
							math_score[j] = math_score[j+1];
							math_score[j+1] = temp;
							
							temp = Chinese_score[j];
							Chinese_score[j] = Chinese_score[j+1];
							Chinese_score[j+1] = temp;
							
							temp = English_score[j];
							English_score[j] = English_score[j+1];
							English_score[j+1] = temp;
							
							temp = average_score[j];
							average_score[j] = average_score[j+1];
							average_score[j+1] = temp;
							
							tempgrade = grade[j];
							grade[j] = grade[j+1];
							grade[j+1] = tempgrade;
							
							strcpy(string, name[j]);
							strcpy(name[j], name[j+1]);
							strcpy(name[j+1], string);
						}
					}
				} 
				for (i=1; i<=5; i++)
				{
					rank[i] = i;
				}
				break;
			case 0:
				printf("�˳�ϵͳ��");
				return 0;
		}
	}
	return 0;
}
