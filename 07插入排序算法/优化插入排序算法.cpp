#include<iostream>
using namespace std;

template<class T>
void Insertion(const T &temp, T *a, int j)
{
	a[0] = temp;
	//int j = i - 1;
	while (temp < a[j])  //使用a[0]设置条件，将之前版本的(in > 0 && a[in - 1] >= temp)条件进行简化，加快代码运行速度，j=0时a[j]=a[0]=temp，不满足条件，退出循环
	{
		a[j + 1] = a[j];
		j--;
	}
	a[j + 1] = temp;
}

template<class T>
void InsertionSort(T *a, int n)
{
	//a[0]用来保存排序使用，不能保存原始数据
	for (int i = 2; i <= n; i++)
	{
		T temp = a[i];
		Insertion(temp, a, i - 1);
		//a[0] = temp;
		//int j = i - 1;
		//while (temp < a[j])  //使用a[0]设置条件，将之前版本的(in > 0 && a[in - 1] >= temp)条件进行简化，加快代码运行速度，j=0时a[j]=a[0]=temp，不满足条件，退出循环
		//{
		//	a[j + 1] = a[j];
		//	j--;
		//}
		//a[j + 1] = temp;
	}
}

int main()
{
	int a[] = { 0,4,2,8,0,5,7,1,3,6,9 };  //在数组前面多加一个0，用于退出循环的条件

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