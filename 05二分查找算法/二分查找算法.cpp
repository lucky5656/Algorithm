#include<iostream>
using namespace std;

int BinarySerach(int *a, const int n, const int x)
{
	int low = 0;  //最小的下标
	int high = n - 1;  //最大的下标
	int mid;  //中间的下标

	while (low <= high)
	{
		mid = low + (high - low) / 2;  
		//mid = (low + high) / 2;  
		/*使用(low+high)/2会有整数溢出的问题（问题会出现在当low+high的结果大于表达式结果类型所能表示的最大值时，这样，产生溢出后再/2是不会产生正确结果的，而low+((high-low)/2)不存在这个问题*/

		if (a[mid] == x)
		{
			return mid;
		}
		else if (a[mid] < x)
		{
			low = mid + 1;
		}
		else if (a[mid] > x)
		{
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };

	int num = 7;
	int result = BinarySerach(a, 10, num);
	if (result == -1)
	{
		cout << "未找到！" << endl;
	}
	else
	{
		cout << "在a[" << result << "]里找到" << num << endl;
	}

	system("pause");

	return 0;
}