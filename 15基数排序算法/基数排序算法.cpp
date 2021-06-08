#include<iostream>
using namespace std;

int maxbit(int arr[], int len)  //����������λ��
{
	int maxData = arr[0];              // �����
	// ������������������λ��
	for (int i = 1; i < len; i++)
	{
		if (maxData < arr[i])
			maxData = arr[i];
	}
	int d = 1;
	int p = 10;
	while (maxData >= p)
	{
		maxData /= 10;
		++d;
	}
	return d;
}

void RadixSort(int arr[], int len)  //��������
{
	int d = maxbit(arr, len);  //���������ֵ��λ��
	int *tmp = new int[len];
	int *count = new int[10]; //������
	int radix = 1;
	for (int i = 1; i <= d; i++) //����d������
	{
		for (int j = 0; j < 10; j++)
			count[j] = 0; //ÿ�η���ǰ��ռ�����
		for (int j = 0; j < len; j++)
		{
			int k = (arr[j] / radix) % 10; //ͳ��ÿ��Ͱ�еļ�¼��
			count[k]++;
		}
		for (int j = 1; j < 10; j++)
			count[j] = count[j - 1] + count[j]; //��tmp�е�λ�����η����ÿ��Ͱ
		for (int j = len - 1; j >= 0; j--) //������Ͱ�м�¼�����ռ���tmp��
		{
			int k = (arr[j] / radix) % 10;
			tmp[count[k] - 1] = arr[j];
			count[k]--;
		}
		for (int j = 0; j < len; j++) //����ʱ��������ݸ��Ƶ�arr��
			arr[j] = tmp[j];
		radix = radix * 10;
	}
	delete[]tmp;
	delete[]count;
}

int main()
{
	int a[] = { 144,203,6,905,47,215,836,26,527,602,848 };
	int len = sizeof(a) / sizeof(a[0]);

	cout << "����ǰ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	RadixSort(a, len);

	cout << "�����" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}