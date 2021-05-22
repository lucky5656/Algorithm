#include<iostream>
using namespace std;

template<class T>
void QuickSort(T *a, const int left, const int right)
{
	if (left < right)
	{
		//ѡ����
		int i = left;
		int j = right + 1;
		T pivot = a[left];  //pivotΪ���ᣬ��������߿�ʼ

		//���л���
		do {
			do i++; while (a[i] < pivot);  //�ҵ���������
			do j--; while (a[j] > pivot);  //�ҵ�������С��
			if (i < j)
			{
				swap(a[i], a[j]);  //С�ķ���ߣ���ķ��ұ�
			}
		} while (i < j);
		swap(a[left], a[j]);

		//�ݹ�
		QuickSort(a, left, j - 1);

		QuickSort(a, j + 1, right);
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

	QuickSort(a, 0, 9);

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

	QuickSort(b, 0, 9);

	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}