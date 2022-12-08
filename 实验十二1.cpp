#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Cuboid
{
public:
	Cuboid() {}
	Cuboid(string s, int a, int b, int c)
	{
		Name = s; Length = a; Width = b; Height = c;
	}
	~Cuboid()
	{
		cout <<Name<< "��������ʧ��!" << endl;
	}
	void SetName(string p)
	{
		Name = p;
	}
	void SetLength(int a, int b, int c)
	{
		Length = a; Width = b; Height = c;
	}
	string GetName()
	{
		return Name;
	}
	int GetLength()
	{
		return Length;
	}
	int GetWidth()
	{
		return Width;
	}
	int GetHeight()
	{
		return Height;
	}
	int GetVolume()
	{
		return Length * Height * Width;
	}
	int GetSphere()
	{
		return 2 * (Length * Height + Height * Width + Width * Length);
	}
	void Displnfo()
	{
		cout << "*******************************" << endl;
		cout << "�������������:" << Name << endl;
		cout << "�䳤�����߷ֱ��ǣ�" <<Length<<setw(2) << Width<<setw(2) << Height<<endl;
		cout << "������ǣ�" << GetVolume() << endl;
		cout << "�������ǣ�" << GetSphere() << endl;
		cout << "================================" << endl;
	}
private:
	int Length, Width, Height;
	string Name;
};
int main()
{
	cout << "2022110957���Ľ�" << endl;
	string name;
	int length, heigth, width;
	cout << "�������һ������������ƣ��������ߣ�" << endl;
	cin >> name >> length >> width >> heigth;
	Cuboid C1;
	C1.SetName ( name);
	C1.SetLength(length, width, heigth);
	Cuboid C2;
	C2.SetName("Cub2");
	C2.SetLength(6, 4, 5);
	C1.Displnfo();
	C2.Displnfo();
	cout << "������������ӵĸ߶��ǣ�" << C1.GetHeight() + C2.GetHeight() << endl;
	return 0;
}