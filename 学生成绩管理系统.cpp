/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/09/09 08:24
	Description: 学生成绩管理系统-用数组存储学生信息 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	float math_score[5], Chinese_score[5], English_score[5], average_score[5];
	char name[5][30];
	int rank[5];       // 排名 
	char grade[5];      // 等级 
	int flag, i, j;
	float temp;
	char tempgrade;
	char string[30];
	
	printf("*****************欢迎来到学生管理系统*******************\n");
	while (1)
	{
		printf("**********************************************************\n");
		printf("请输入菜单选项:\n");
		printf("0 退出系统\n");
		printf("1 输入学生信息\n");
		printf("2 输出学生信息\n");
		printf("3 根据均分排序\n");
		printf("**********************************************************\n");
		scanf("%d", &flag);
		
		switch (flag)
		{
			case 1:
				for (i=0; i<5; i++)
				{
					printf("请输入姓名：\n");
					scanf("%s", name[i]);
					printf("请输入成绩：（格式为:数学、语文、英语）\n");
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
						printf("输入错误！\n");
					}
					rank[i] = 0;      // 未排序时名次都是0 
					getchar();
				}
				break;
			case 2:
				printf("----------------------------------------------------\n");
				printf("|姓名|数学成绩|语文成绩|英语成绩|平均成绩|等级|排名|\n");
				for (i=0; i<5; i++)
				{
					printf("----------------------------------------------------\n");
					printf("|%-4s|%-8.2f|%-8.2f|%-8.2f|%-8.2f|%-4c|%-4d|\n", name[i], math_score[i], Chinese_score[i], English_score[i], average_score[i], grade[i], rank[i]);
				}
				printf("----------------------------------------------------\n");
				break;
			case 3:      //冒泡排序法 
				for (i=0; i<4; i++)       // 五组数据，排4次 
				{
					for (j=0; j<4-i; j++)
					{
						if (average_score[j] < average_score[j+1])
						{  // 第j个学生的信息和第j+1个学生的信息交换 
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
				printf("退出系统！");
				return 0;
		}
	}
	return 0;
}
