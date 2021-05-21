#include<iostream>
using namespace std;

template<class T>
void InsertionSort(T *a, int n)
{
	int in, out;  //in�ź�˳��ģ�outδ�ź�˳���
	for (out = 1; out < n;out++)  //out = 0�Ѿ�Ĭ��Ϊ�ź�˳���
	{
		T temp = a[out];  //��������Ԫ�ظ���Ϊ�ڱ�
		in = out;
		while (in > 0 && a[in - 1] >= temp)  //�Ӻ���ǰ���Ҵ������λ��
		{
			a[in] = a[in - 1];  //����Ųλ��
			in--;
		}
		a[in] = temp;  //���ƴ�����Ԫ�ص�����λ��
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

	InsertionSort(a, 10);

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

	InsertionSort(b, 10);

	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}