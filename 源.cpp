#include<iostream>
using namespace std;
int f(int x)
{
	if (x == 1)
		return 1;
	else
		if (x == 2)
			return 2;
		else
			return f(x - 1) + 2 * f(x - 2);
}
int main()
{
	cout << "2022110957���Ľ�" << endl;
	cout << "���������е���ţ�";
	int x;
	cin >> x;
	cout << "���еĵ�" << x << "��Ϊ��" << f(x) << endl;
	system("pause");
	return 0;
}
