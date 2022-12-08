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
		cout <<Name<< "长方体消失了!" << endl;
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
		cout << "长方体的名称是:" << Name << endl;
		cout << "其长，宽，高分别是：" <<Length<<setw(2) << Width<<setw(2) << Height<<endl;
		cout << "其体积是：" << GetVolume() << endl;
		cout << "其表面积是：" << GetSphere() << endl;
		cout << "================================" << endl;
	}
private:
	int Length, Width, Height;
	string Name;
};
int main()
{
	cout << "2022110957彭文杰" << endl;
	string name;
	int length, heigth, width;
	cout << "请输入第一个长方体的名称，长，宽，高：" << endl;
	cin >> name >> length >> width >> heigth;
	Cuboid C1;
	C1.SetName ( name);
	C1.SetLength(length, width, heigth);
	Cuboid C2;
	C2.SetName("Cub2");
	C2.SetLength(6, 4, 5);
	C1.Displnfo();
	C2.Displnfo();
	cout << "两个长方体叠加的高度是：" << C1.GetHeight() + C2.GetHeight() << endl;
	return 0;
}