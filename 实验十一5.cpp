#include<iostream>
using namespace std;
int C(int n, int m)
{
	if (m == 0 || m == n)
		return 1;
	else
		return C(n - 1, m) + C(n - 1, m - 1);
}
int main()
{
	cout << "2022110957彭文杰" << endl;
	cout << "请按从大到小的顺序输入两个正整数：";
	int n, m;
	cin >> n >> m;
	cout << n << "选" << m << "的组合数为：" << C(n, m) << endl;
	system("pause");
	return 0;
}
