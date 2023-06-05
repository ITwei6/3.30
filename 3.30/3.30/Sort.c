#include "sort.h"
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		//��д���ˣ���д����
		int end=i-1;//end�����һ�����ݵ��±�
		int tmp=a[i];//tmp��Ҫ���������
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
		//�����������ֿ���-һ����tmp����a[end]��һ����tmpС������a[end]
		//������tmp�����λ�ö���end+1
		a[end + 1] = tmp;
	}
}
void ShellSort(int* a, int n)//�����һ���������һ��
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		//gap=gap/3+1;
		//��д����
		for (int j = 0; j < gap; j++)
		{
			for (int i = j; i < n - gap; i += gap)
			{
				//��д��ɫһ��
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
//void ShellSort(int* a, int n)//���鲢��
//{
//	int gap = 3;
//	//��д����
//	
//		for (int i = 0; i < n - gap; i++)
//		{
//			//��д��ɫһ��
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