#include<iostream>
using namespace std;

// ���ֲ���
int BinarySearch_Recursion(int *a, const int low, const int high, const int x)  //���õݹ�
{
	if (low <= high)
	{
		int mid = low + (high - low);
		if (x == a[mid])
		{
			return mid;
		}
		else if (x < a[mid])
		{
			return BinarySearch_Recursion(a, low, mid - 1, x);
		}
		else if (x > a[mid])
		{
			return BinarySearch_Recursion(a, mid + 1, high, x);
		}
	}
}

int BinarySearch_Iteration(int *a, const int n, const int x)  //���õ�������ѭ����
{
	int low = 0;
	int high = n - 1;
	int mid;

	while (low <= high)
	{
		mid = low + (high - low);
		if (x == a[mid])
		{
			return mid;
		}
		else if (x < a[mid])
		{
			high = mid - 1;
		}
		else if (x > a[mid])
		{
			low = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };

	int num = 7;

	int result1 = BinarySearch_Recursion(a, 0, 9, num);
	if (result1 == -1)
	{
		cout << "�ݹ飺δ�ҵ���" << endl;
	}
	else
	{
		cout << "�ݹ飺��a[" << result1 << "]���ҵ�" << num << endl;
	}

	int result2 = BinarySearch_Iteration(a, 9, num);
	if (result2 == -1)
	{
		cout << "������δ�ҵ���" << endl;
	}
	else
	{
		cout << "��������a[" << result2 << "]���ҵ�" << num << endl;
	}

	system("pause");

	return 0;
}