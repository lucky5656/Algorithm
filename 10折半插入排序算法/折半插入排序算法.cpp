#include<iostream>
using namespace std;

template<class T>
void BinaryInsertionSort(T *a, int n)
{
	int i, j, low, high, mid;
	for (i = 2; i < n; i++)  //���ν�a[2]~a[n]���뵽ǰ���Ѿ��ź�����б�
	{
		a[0] = a[i];  //��a[i]�ݴ浽a[0]
		low = 1;
		high = i - 1;
		while (low <= high)
		{
			mid = low + (high - low) / 2;  //ȡ�м�λ��(����low + (high - low) / 2��mid��Ϊ�˷�ֹ�����������)
			if (a[mid] > a[0])  //�������ӱ�
			{
				high = mid - 1;
			}
			else  //�������ӱ�
			{
				low = mid + 1;
			}
		}
		for (j = i - 1; j >= high + 1; --j)  //i - 1ָ������Ԫ�ص�ǰһ��Ԫ�أ��������б������д��ڴ�����Ԫ�ص����һ��Ԫ�أ�high + 1ָ�����б������д��ڴ�����Ԫ�صĵ�һ��Ԫ��
		{
			a[j + 1] = a[j];  //ͳһ����Ԫ��
		}
		a[high + 1] = a[0];  //�������
	}
}

int main()
{
	int a[] = { 0,4,2,8,0,5,7,1,3,6,9 };

	cout << "����ǰ��" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	BinaryInsertionSort(a, 11);

	cout << "�����" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	double b[] = { 0,4.1,2.2,8.3,0.4,5.5,7.6,1.7,3.8,6.9,9.0 };

	cout << "����ǰ��" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	BinaryInsertionSort(b, 11);

	cout << "�����" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}