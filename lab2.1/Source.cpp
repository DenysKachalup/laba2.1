#include<iostream>
#include "Line.h"

using namespace std;

Line  makeLine(double a, double b)
{
	Line t(a, b);

	return t;
}
 
int main()
{
	Line a(1, 2);
	Line b(3, 4);

	cout << " a++ " << a++ << endl;
	cout << " a   " << a << endl;
	cout << " ++a " << ++a << endl;
	cout << " a   " << a << endl;

	Line q;
	//cout << "q = " << endl;
	cin >> q;
	cout << "q = " << q << endl;

	Line y; y = a * q + b;
	cout << "y = " << endl;
	cout << y;

	Line t = makeLine(2, 4);
	cout << "t = " << endl;
	cout << t << endl;
}