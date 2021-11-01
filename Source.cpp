#include<iostream>
using namespace std;

int main()
{
	int x;

	int Factorial = 1;

	int y = 0;

	cout << "please Eter a number:";
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		Factorial *= i;
		if (Factorial == x)
		{
			cout << "factorial:"<<endl;

			y = 1;
			system("pause");
		}

	}

	if (y == 0)
	{
		cout << "no";
	}

	cout << endl;

	cout << "bye"<< endl;

}