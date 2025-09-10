#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;
	double d;

	cout << "A" << endl;
	cin >> a;
	cout << "B" << endl;
	cin >> b;
	cout << "C" << endl;
	cin >> c;
	if (a == 0) cout << "No sollutions";
	else
	{
		d = ((b * b) - (4 * a * c));
		if (d == 0) cout << "x = " << (b * (-1) / (2 * a));
		else if (d < 0) cout << "No sollutions";
		else if (d > 0) cout << "x1 = " << ((b * (-1) + sqrt(d)) / (2 * a)) << "; x2 = " << ((b * (-1) - sqrt(d)) / (2 * a));
	}
}