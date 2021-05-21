#include<iostream>
using namespace std;

template<class T>
void Insertion(const T &temp, T *a, int j)
{
	a[0] = temp;
	//int j = i - 1;
	while (temp < a[j])  //ʹ��a[0]������������֮ǰ�汾��(in > 0 && a[in - 1] >= temp)�������м򻯣��ӿ���������ٶȣ�j=0ʱa[j]=a[0]=temp���������������˳�ѭ��
	{
		a[j + 1] = a[j];
		j--;
	}
	a[j + 1] = temp;
}

template<class T>
void InsertionSort(T *a, int n)
{
	//a[0]������������ʹ�ã����ܱ���ԭʼ����
	for (int i = 2; i <= n; i++)
	{
		T temp = a[i];
		Insertion(temp, a, i - 1);
		//a[0] = temp;
		//int j = i - 1;
		//while (temp < a[j])  //ʹ��a[0]������������֮ǰ�汾��(in > 0 && a[in - 1] >= temp)�������м򻯣��ӿ���������ٶȣ�j=0ʱa[j]=a[0]=temp���������������˳�ѭ��
		//{
		//	a[j + 1] = a[j];
		//	j--;
		//}
		//a[j + 1] = temp;
	}
}

int main()
{
	int a[] = { 0,4,2,8,0,5,7,1,3,6,9 };  //������ǰ����һ��0�������˳�ѭ��������

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