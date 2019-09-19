#define _CRT_SECURE_NO_WARNINGS 1
/*#include<stdio.h>

//奇数位于偶数之前

void Function(int *arr,int len)
{
int left=0;
int tmp;
for (left = 0; left < len; left++)
{
if ((arr[left] % 2) == 0)//偶数
{
for (int i = left; i < len; i++)
{
if ((arr[i] % 2) != 0)//奇数
{
tmp = arr[i];
arr[i] = arr[left];
arr[left] = tmp;
break;
}
}
}
}
for (int i = 0; i < len; i++)
{
printf("%d  ", arr[i]);
}
printf("\n");
}

int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int len = sizeof(arr) / sizeof(arr[0]);
Function(&arr,len);
//Show(&arr, len);
}*/

#include<stdio.h>

//杨氏矩阵查找

#define row 3
#define col 3
void Function(int arr[][col], int input)
{
	if ((arr[0][0] <= input) && (input <= arr[row - 1][col - 1]))
	{
		printf("查找成功\n");
	}
	else
	{
		printf("查找失败\n");
	}
}
int main()
{
	int input = 0;
	int arr[row][col] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	scanf_s("%d", &input);
	Function(arr, input);
}