#include<iostream>
using namespace std;

// 排列组合（Permutations）
void Permutations(char *p, const int k, const int m)  //利用递归
{
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
			swap(p[k], p[i]);
			Permutations(p, k + 1, m);
			swap(p[k], p[i]);
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