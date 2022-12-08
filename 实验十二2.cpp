#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Sport
{
public:
	void InputDate()
	{
		cout << "�������˶�Ա�ı�ţ����������䣬��λ���еĴ�֣�" << endl;
		cin >> No >> Name>> Age;
		for (int i = 0; i < 5; i++)
			cin >> Score[i];
	}
	float GetMaxScore()
	{
		float max=Score[0];
		for (int i = 0; i < 5; i++)
			if (Score[i] >= max)
				max = Score[i];
		return max;
	}
	float GetMinScore()
	{
		float min = Score[0];
		for (int i = 0; i < 5; i++)
			if (Score[i] <= min)
				min = Score[i];
		return min;
	}
	float GetFinalScore()
	{
		float final=0;
		for (int i = 0; i < 5; i++)
			final += Score[i];
		return (final - GetMaxScore() - GetMinScore()) / 3;
	}
	void OutputDate(bool s)
	{
		if (s)
			cout << "���" << setw(8) << "����" << setw(6) << "����" << setw(8) << "��߷�" << setw(8) << "��ͷ�" << setw(10) << "���յ÷�" << endl;
		cout << No << setw(8) << Name << setw(6) << Age;
		cout << fixed;
		cout.precision(2);
		cout<< setw(8) << GetMaxScore() << setw(8) << GetMinScore() << setw(10) << GetFinalScore() << endl;
	}
private:
	int No, Age;
	string Name;
	float Score[5];
};
int main()
{
	cout << "2022110957���Ľ�" << endl;
	Sport s1, s2;
	s1.InputDate();
	s2.InputDate();
	s1.OutputDate(true);
	s2.OutputDate(false);
}