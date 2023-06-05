#include "sort.h"
int main()
{
	int a[10] = { 5,3,6,1,2,4,7,8,9 };
	/*InsertSort(a, 10);*/
	ShellSort(a, 10);
	
	return 0;
}
//{8,9,7,6,5,4,3,2,1}
