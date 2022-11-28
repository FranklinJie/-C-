#include<iostream>
#include<iomanip>
using namespace std;
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void MaxMin(int a[], int n, int* odd, int* even)
{
	int maxo, maxe;
	for(int i=0;i<n;i++)
		if(a[i]%2==0)
		{maxe = a[i]; break;}
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{maxo = a[i]; break;}
	for(int i=0;i<n;i++)
		if (a[i] % 2 == 0)
		{
			if (a[i] >= maxe)
			{
				maxe = a[i];
				*even = i;
			}
		}else
			if(a[i]%2!=0)
			{
				maxo = a[i];
				*odd = i;
			}
}
int main()
{
	cout << "2022110957���Ľ�" << endl;
	cout << "���������ݸ�����<100����";
	int n;
	cin >> n;
	int* a = new int[n];
	cout << "������" << n << "��������" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int odd, even;
	MaxMin(a, n, &odd, &even);
	swap(a + odd, a + even);
	cout << n << "������������ż��������Ľ��Ϊ��" << endl;
	for (int i = 0; i < n; i++)
		cout << setw(5) << *(a + i);
	cout << endl;
	return 0;
}
