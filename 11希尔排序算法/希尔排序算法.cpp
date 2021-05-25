#include<iostream>
using namespace std;

template <class T>
void InsertSort(T *a, int n, int i, int gap)
{
	int j;

	for (j = i + gap; j < n; j += gap)
	{
		// ���a[j] < a[j-gap]����Ѱ��a[j]λ�ã������������ݵ�λ�ö����ơ�
		if (a[j] < a[j - gap])
		{
			T temp = a[j];
			int k = j - gap;
			while (k >= 0 && a[k] > temp)
			{
				a[k + gap] = a[k];
				k -= gap;
			}
			a[k + gap] = temp;
		}
	}
}

template <class T>
void ShellSort(T *a, int n)
{
	int i, gap;

	// gapΪ������ÿ�μ�Ϊԭ����һ��
	for (gap = n / 2; gap > 0; gap /= 2)
	{
		// ��gap���飬��ÿһ�鶼ִ��ֱ�Ӳ�������
		for (i = 0; i < gap; i++)
		{
			InsertSort(a, n, i, gap);
		}
	}
}

int main()
{
	int a[] = { 4,2,8,0,5,7,1,3,6,9 };

	cout << "����ǰ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	ShellSort(a, 10);

	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	double b[] = { 4.1,2.2,8.3,0.4,5.5,7.6,1.7,3.8,6.9,9.0 };

	cout << "����ǰ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	ShellSort(b, 10);

	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}