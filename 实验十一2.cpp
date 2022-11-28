#include<iostream>
using namespace std;
void MonthDay(int year, int num, int& month, int& day)
{
	int a[12];
	a[0] = 31;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		a[1] = 29;
	else
		a[1] = 28;
	for (int i = 2; i < 7; i++)
		if (i % 2 == 0)
			a[i] = 31;
		else
			a[i] = 30;
	for (int i = 7; i < 12; i++)
		if (i % 2 == 0)
			a[i] = 30;
		else
			a[i] = 31;
	for (month = 0; month < 12 && a[month] < num; month++)
		num -= a[month];
	month++;
	day = num;
}
int main()
{
	cout << "2022110957���Ľ�" << endl;
	int year, num;
	cout << "������һ����ݣ�";
	cin >> year;
	cout << "������" << year << "�ĵڼ��죺";
	cin >> num;
	int month, day;
	MonthDay(year, num, month, day);
	cout << year << "�ĵ�" << num << "����" << month << "��" << day << "��" << endl;
	return 0;
}