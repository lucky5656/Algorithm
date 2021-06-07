#include<iostream>
using namespace std;

void CountingSort(int *arr, int size)
{
	int minValue = arr[0];  //ͨ��maxValue��minValue�������ʱ��������Ҫ���ٵĿռ��С
	int maxValue = arr[0];
	int* tmp = 0;
	int count = 0;
	for (int i = 0; i < size; i++)  //�ҳ��������������������С��Ԫ��
	{
		if (arr[i] < minValue) 
			minValue = arr[i];
		if (arr[i] > maxValue)
			maxValue = arr[i];
	}
	int range = maxValue - minValue + 1;  //�������ݵķ�ɢ�ռ�
	tmp = (int*)malloc(sizeof(arr[0])*size);  //���븨���ռ�
	if (tmp == NULL)
		return;
	memset(tmp, 0, sizeof(int)*range);  //��ʼ��

	for (int i = 0; i < size; i++)  //ͳ��ÿ��Ԫ�س��ֵĴ���
		tmp[arr[i] - minValue]++;  //�ڴ洢��Ҫ��ԭʼ������ֵ�ϼ�ȥminValue�Ų������Խ������

	for (int i = 0; i < range; i++)  //ͨ��ͳ��tmp[];����Ԫ��
	{
		while (tmp[i]--)
			arr[count++] = i + minValue;  //Ҫ��i��ֵ����minValue���ܻ�ԭ��ԭʼ����
	}
	free(tmp);
}

int main()
{
	int a[] = { 2,3,8,7,1,7,3,9,8,2,1,4,2,4,6,9 };
	int len = (int) sizeof(a) / sizeof(*a);

	cout << "����ǰ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	CountingSort(a, len);

	cout << "�����" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}