#include <iostream>
using namespace std;
#include <algorithm>

// ���ѵ���
void MaxHeapify(int arr[], int start, int end) 
{
	// ���������ָ����ӽ��ָ��
	int Parent = start;
	int Child = Parent * 2 + 1;
	while (Child <= end)  // ���ӽ��ָ���ڷ�Χ�ڲ����Ƚ�
	{
		if (Child + 1 <= end && arr[Child] < arr[Child + 1]) // �ȱȽ������ӽ��ָ���С��ѡ������
			Child++;
		if (arr[Parent] > arr[Child]) // ������������ӽ����������ϣ�ֱ����������
			return;
		else { // ���򽻻����������ټ����ӽ�������Ƚ�
			swap(arr[Parent], arr[Child]);
			Parent = Child;
			Child = Parent * 2 + 1;
		}
	}
}

void HeapSort(int arr[], int len) 
{
	// ��ʼ����i�����һ������㿪ʼ����
	for (int i = len / 2 - 1; i >= 0; i--)
		MaxHeapify(arr, i, len - 1);
	// �Ƚ���һ��Ԫ�غ��Ѿ��źõ�Ԫ��ǰһλ�������������µ������յ�����Ԫ��֮ǰ��Ԫ�أ���ֱ���������
	for (int i = len - 1; i > 0; i--) 
	{
		swap(arr[0], arr[i]);
		MaxHeapify(arr, 0, i - 1);
	}
}

int main() 
{
	int arr[] = { 4,2,8,0,5,7,1,3,6,9 };
	int len = (int) sizeof(arr) / sizeof(*arr);

	cout << "����ǰ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	HeapSort(arr, len);

	cout << "�����" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}