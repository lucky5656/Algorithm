#include<iostream>
using namespace std;

int num1 = 0;  //ͳ��Permutations()�������ô���
int num2 = 0;  //ͳ�Ƶݹ鷵�ش���

// ������ϣ�Permutations��

void show(char *p, int m)
{
	for (int i = 0; i <= m; i++)
	{
		cout << p[i];
	}
	cout << endl;
}

void Permutations(char *p, const int k, const int m)  //���õݹ�
{
	cout << "Permutations()�������ô�����" << ++num1 << endl;

	if (k == m)
	{
		for (int i = 0; i <= m; i++)
		{
			cout << p[i];
		}
		cout << endl;
	}
	else
	{
		for (int i = k; i <= m; i++)
		{
			cout << "�ݹ�ǰ������ǰ��";
			show(p, m);

			swap(p[k], p[i]);
			cout << "�ݹ�ǰ��������";
			show(p, m);

			Permutations(p, k + 1, m);
			cout << "�ݹ鷵�ش�����" << ++num2 << endl;
			cout << "�ݹ�󣬽���ǰ��";
			show(p, m);

			swap(p[k], p[i]);
			cout << "�ݹ�󣬽�����";
			show(p, m);
		}
	}
}

int main()
{
	char s[] = "abc";
	Permutations(s, 0, 2);  // 0ָa��2ָc

	system("pause");

	return 0;
}