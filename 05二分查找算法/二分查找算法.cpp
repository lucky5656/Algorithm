#include<iostream>
using namespace std;

int BinarySerach(int *a, const int n, const int x)
{
	int low = 0;  //��С���±�
	int high = n - 1;  //�����±�
	int mid;  //�м���±�

	while (low <= high)
	{
		mid = low + (high - low) / 2;  
		//mid = (low + high) / 2;  
		/*ʹ��(low+high)/2����������������⣨���������ڵ�low+high�Ľ�����ڱ��ʽ����������ܱ�ʾ�����ֵʱ�������������������/2�ǲ��������ȷ����ģ���low+((high-low)/2)�������������*/

		if (a[mid] == x)
		{
			return mid;
		}
		else if (a[mid] < x)
		{
			low = mid + 1;
		}
		else if (a[mid] > x)
		{
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };

	int num = 7;
	int result = BinarySerach(a, 10, num);
	if (result == -1)
	{
		cout << "δ�ҵ���" << endl;
	}
	else
	{
		cout << "��a[" << result << "]���ҵ�" << num << endl;
	}

	system("pause");

	return 0;
}