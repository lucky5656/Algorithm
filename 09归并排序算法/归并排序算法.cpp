#include <iostream>
using namespace std;

//��a[low, mid]��a[mid+1, high]������������ϲ�Ϊһ����������
void Merge(int *a, int *temp, int low, int mid, int high)
{
	int i = low;  //��߲�������ָ��
	int j = mid + 1;  //�ұ߲�������ָ��
	int k = low;  //��temp������в�����ָ��
	while (i <= mid && j <= high)
	{
		if (a[i] <= a[j])
		{
			//temp[k] = a[i];
			//k++;
			//i++;
			temp[k++] = a[i++];  //�ȼ����������д���
		}
		else
		{
			temp[k++] = a[j++];
		}
	}
	if (i <= mid)
	{
		while (i <= mid)  //�鿴��������Ƿ�Ϊ��
		{
			temp[k++] = a[i++];
		}
	}
	else
	{
		while (j <= high)  //�鿴�ұ������Ƿ�Ϊ��
		{
			temp[k++] = a[j++];
		}
	}
	for (int n = low; n <= high; n++)  //�ƶ���ԭ����
	{
		a[n] = temp[n];

	}
}

void MergeSort(int *a, int *temp, int low, int high)  // aΪ����������飻tempΪ��������
{
	if (low < high)  // low == highʱ���͵ݹ鵽ֻ��һ��Ԫ�أ�Ϊ��ֹ����
	{
		int mid = low + (high - low) / 2;  //�֣�������һ��Ϊ����(����low + (high - low) / 2��mid��Ϊ�˷�ֹ�����������)��
		MergeSort(a, temp, low, mid);  //�Σ�����ߵ���������(a[low] ~ a[mid])
		MergeSort(a, temp, mid + 1, high);  //�Σ����ұߵ���������(a[mid+1] ~ a[high])
		Merge(a, temp, low, mid, high);  //�ϣ��ϲ�������������
	}
}

int main()
{
	int a[] = { 4,2,5,0,7,1,6,3 };
	int b[8] = { 0 };  //���ڴ�Ź鲢��Ľ��

	cout << "�鲢ǰ��" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	MergeSort(a, b, 0, 7);

	cout << "�鲢��" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	system("pause");

	return 0;
}