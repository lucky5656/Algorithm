#include<iostream>
using namespace std;

template<class T>
void InsertionSort(T *a, int n)
{
	int i, j;
	for (i = 2; i < n; i++)  //���ν�a[2]~a[n]���뵽ǰ���Ѿ��ź�����б�
	{
		if (a[i] < a[i - 1])  //��a[i]С��ǰһ��Ԫ�أ���a[i]���������
		{
			a[0] = a[i];  //����Ϊ�ڱ���a[0]�����Ԫ��
			for (j = i - 1; a[0] < a[j]; --j)  //�Ӻ���ǰ���Ҵ������λ��
			{
				a[j + 1] = a[j];  //����Ųλ��
			}
			a[j + 1] = a[0];  //���Ƶ�����λ��
		}
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

	InsertionSort(a, 10);

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

	InsertionSort(b, 10);

	cout << "�����" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}