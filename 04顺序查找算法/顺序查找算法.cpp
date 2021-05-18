#include<iostream>
using namespace std;

int SequentialSearch(int *a, const int n, const int num)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == num)
		{
			return i;
		}
	}
	if (i == n)
	{
		return -1;
	}
}

int main()
{
	int a[] = { 4,2,8,0,5,7,1,3,6,9 };

	int num = 7;
	int result = SequentialSearch(a, 10, num);
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