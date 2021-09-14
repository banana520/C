/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/09/14 22:47
	Description: 从键盘输入10个整数，利用简单选择排序算法对这10个数按从小到大的顺序进行排列 
	当实参是数组名时，传递给形参的是数组的首地址，在被调函数执行时会给传过来的“首地址 ”分配临时存储空间，而数组还是共用
	原来的空间 ，因此对形参指向的数组元素的值进行处理，改变的是实参指向的值。 
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
