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
	cout << "2022110957���Ľ�" << endl;
	cout << "�밴�Ӵ�С��˳������������������";
	int n, m;
	cin >> n >> m;
	cout << n << "ѡ" << m << "�������Ϊ��" << C(n, m) << endl;
	system("pause");
	return 0;
}
