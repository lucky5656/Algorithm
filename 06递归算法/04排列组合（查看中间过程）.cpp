#include<iostream>
using namespace std;

int num1 = 0;  //统计Permutations()函数调用次数
int num2 = 0;  //统计递归返回次数

// 排列组合（Permutations）

void show(char *p, int m)
{
	for (int i = 0; i <= m; i++)
	{
		cout << p[i];
	}
	cout << endl;
}

void Permutations(char *p, const int k, const int m)  //利用递归
{
	cout << "Permutations()函数调用次数：" << ++num1 << endl;

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
			cout << "递归前，交换前：";
			show(p, m);

			swap(p[k], p[i]);
			cout << "递归前，交换后：";
			show(p, m);

			Permutations(p, k + 1, m);
			cout << "递归返回次数：" << ++num2 << endl;
			cout << "递归后，交换前：";
			show(p, m);

			swap(p[k], p[i]);
			cout << "递归后，交换后：";
			show(p, m);
		}
	}
}

int main()
{
	char s[] = "abc";
	Permutations(s, 0, 2);  // 0指a；2指c

	system("pause");

	return 0;
}