#include <iostream>
#include <math.h>
#include<CMATH>

using namespace std;

int main()
{
	double eps = 0.0001; 
	const long double pi = 3.1415926;
	double se = 0, sn = 0;
	long double y;
	int i = 1, k = 10, n = 1;
	double x;
	long double a = pi / 5, b = (9 * pi) / 5;
	cout << "        n = 40" << endl << endl;
	

	for (x = a; x <= b; x += (b - a) / k)
	{
		y = (-1) * log(abs(2 * sin(x / 2)));
		for (n = 1; n <= 40; n++)
		{
			sn += (cos(n * x)) / n;

     	}

		double l;
		do
		{
			l= (cos(i * x)) / i;
			se += l;
			i++;
		} while (abs(l) > eps);

		cout << "        x = " << x << "\t\t" << "SN = " << sn << "\t\t" << "SE = " << se << "\t\t" << "Y = " << y << endl;
	}
	return 0;
}

