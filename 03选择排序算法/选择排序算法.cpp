#include<iostream>
using namespace std;

void SelectSort(int *list, const int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;  //minΪ��Сֵ����
		for (int j = i + 1; j < n; j++)
		{
			if (list[j] < list[min])
			{
				min = j;
			}
		}
		std::swap(list[i], list[min]);
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

	SelectSort(a, 10);

	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	system("pause");

	return 0;
}