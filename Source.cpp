#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n, sum = 0;

	cout << "\n Vnesi ja vrednosta na n : ";
	cin >> n;

	cout << "\n Sum = ";

	for (int i = 1; i <= n; i++)
	{
		if (i != n)
			cout << i << " + ";

		else
			cout << i << " = ";

		sum += i;
	}

	cout << sum;


	cin.get(); cin.get();

	return 0;
}