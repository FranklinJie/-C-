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
	cout << "2022110957彭文杰" << endl;
	int x, y;
	cout << "请输入两个正整数：";
	cin >> x >> y;
	int divisor, multiple;
	a(x, y, divisor, multiple);
	cout << "正整数" << x << "和" << y << "的最大公约数为" << divisor << ",最小公倍数为" << multiple << endl;
	return 0;
}
