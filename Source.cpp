
#include<iostream>
using namespace std;

void p(string a, int n);

int main()
{
	int x, y;

	cout << "enter your rows: "<< endl ;
	cin >> x;

	cout << "enter your columns: "<< endl;
	cin >> y;

	for (int i = 0; i < y; i++) {
		cout << endl;
		p(" *# ", x);

	}
}
void p(string a, int y)
{
	for (int i = 1; i <= y; i++)
	{
		cout << a;

	}
}