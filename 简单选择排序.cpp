/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/09/14 22:47
	Description: �Ӽ�������10�����������ü�ѡ�������㷨����10��������С�����˳��������� 
	��ʵ����������ʱ�����ݸ��βε���������׵�ַ���ڱ�������ִ��ʱ����������ġ��׵�ַ ��������ʱ�洢�ռ䣬�����黹�ǹ���
	ԭ���Ŀռ� ����˶��β�ָ�������Ԫ�ص�ֵ���д����ı����ʵ��ָ���ֵ�� 
*/
#include <stdio.h>
void sort(int arr[], int n)
{
	int i, j, k, t;
	for (i=0; i<n-1; i++)
	{
		k = i;
		for (j=i+1; j<n; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		t = arr[k];
		arr[k] = arr[i];
		arr[i] = t;
	}
}
int main()
{
	int a[10], i;
	for (i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, 10);
	printf("\nthe sorted array:\n");
	for (i=0; i<10; i++)
	{
		printf("%4d", a[i]);
	}
	return 0;
} 
