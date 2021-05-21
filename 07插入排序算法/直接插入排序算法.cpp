#include<iostream>
using namespace std;

template<class T>
void InsertionSort(T *a, int n)
{
	int i, j;
	for (i = 2; i < n; i++)  //依次将a[2]~a[n]插入到前面已经排好序的列表
	{
		if (a[i] < a[i - 1])  //若a[i]小于前一个元素，将a[i]插入有序表
		{
			a[0] = a[i];  //复制为哨兵，a[0]不存放元素
			for (j = i - 1; a[0] < a[j]; --j)  //从后往前查找待插入的位置
			{
				a[j + 1] = a[j];  //往后挪位置
			}
			a[j + 1] = a[0];  //复制到插入位置
		}
	}
}

int main()
{
	int a[] = { 0,4,2,8,0,5,7,1,3,6,9 };

	cout << "排序前：" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	InsertionSort(a, 10);

	cout << "排序后：" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	double b[] = { 0,4.1,2.2,8.3,0.4,5.5,7.6,1.7,3.8,6.9,9.0 };

	cout << "排序前：" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	InsertionSort(b, 10);

	cout << "排序后：" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}