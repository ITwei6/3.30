#include "sort.h"
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		//先写单趟，再写总体
		int end=i-1;//end是最后一个数据的下标
		int tmp=a[i];//tmp是要插入的数据
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		//到这里有两种可能-一种是tmp大于a[end]另一种是tmp小于所有a[end]
		//但最终tmp插入的位置都是end+1
		a[end + 1] = tmp;
	}
}
void ShellSort(int* a, int n)//先完成一组再完成另一组
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		//gap=gap/3+1;
		//再写总体
		for (int j = 0; j < gap; j++)
		{
			for (int i = j; i < n - gap; i += gap)
			{
				//先写红色一趟
				int end = i;
				int tmp = a[i + gap];
				while (end >= 0)
				{
					if (tmp < a[end])
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
					{
						break;
					}
				}
				a[end + gap] = tmp;
			}
		}
		Print(a, 10);
	}

}
void Print(int* a, int n)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//void ShellSort(int* a, int n)//多组并排
//{
//	int gap = 3;
//	//再写总体
//	
//		for (int i = 0; i < n - gap; i++)
//		{
//			//先写红色一趟
//			int end = i;
//			int tmp = a[i + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + 1] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	
//}