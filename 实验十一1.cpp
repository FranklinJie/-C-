#include<iostream>
using namespace std;
void a(int x, int y, int& divisor, int& multiple)
{
	for (divisor = x; divisor > 0; divisor--)
		if (x % divisor == 0 && y % divisor == 0)
			break;
	multiple = (x * y) / divisor;
}
int main()
{
	cout << "2022110957���Ľ�" << endl;
	int x, y;
	cout << "������������������";
	cin >> x >> y;
	int divisor, multiple;
	a(x, y, divisor, multiple);
	cout << "������" << x << "��" << y << "�����Լ��Ϊ" << divisor << ",��С������Ϊ" << multiple << endl;
	return 0;
}
