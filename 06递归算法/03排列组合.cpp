#include<iostream>
using namespace std;

// ������ϣ�Permutations��
void Permutations(char *p, const int k, const int m)  //���õݹ�
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
	Permutations(s, 0, 2);  // 0ָa��2ָc

	system("pause");

	return 0;
}