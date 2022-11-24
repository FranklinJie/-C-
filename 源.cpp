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
	cout << "2022110957彭文杰" << endl;
	cout << "请输入数列的序号：";
	int x;
	cin >> x;
	cout << "数列的第" << x << "项为：" << f(x) << endl;
	system("pause");
	return 0;
}
