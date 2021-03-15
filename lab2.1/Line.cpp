#include "Line.h"
#include <sstream>

Line::Line()
{
	first = 0;
	second = 0;
}
Line::Line(double x , double y )
{
	first = x;
	second = y;
}
Line::Line(const Line& x)
{
	first = x.first;
	second = x.second;
}
Line::~Line(){}
Line& Line::operator = (const Line& x)
{
	first = x.first;
	second = x.second;

	return *this;
}
Line::operator string () const
{
	stringstream sout;
	sout << " first = " << first << endl;
	sout << " second = " << second << endl;

	return sout.str();
}
Line operator + (const Line& x, const Line& y)
{
	return Line(x.first + y.first, x.second + y.second);
}
Line operator - (const Line& x, const Line& y)
{
	return Line(x.first - y.first, x.second - y.second);
}
Line operator * (const Line& x, const Line& y)
{
	return Line(x.first * y.first - x.second * y.second, x.first * y.first + x.second * y.second);
}
Line operator / (const Line& x, const Line& y)
{
	return Line((x.first * y.first - x.second * y.second) / (y.first * y.first + y.second * y.second),
		(-x.first * y.second + x.first * y.first) / (y.first * y.first + y.second * y.second));
}
Line operator ^ (const Line& x, const unsigned n)
{
	Line y(1, 0);
	for (unsigned i = 1; i <= n; i++)
		y = y * x;
	return y;
}
ostream& operator << (ostream& out, const Line& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Line& x)
{
	//double f, s;
	cout << "First = "; in >> x.first;
	cout << "Second = "; in >> x.second;
	return in;
}
Line& Line::operator ++()
{
	first++;
	return *this;
}
Line& Line::operator --()
{
	first--;
	return *this;
}
Line Line::operator ++(int)
{
	Line t(*this);
	second++;
	return t;
}
Line Line::operator --(int)
{
	Line t(*this);
	second--;
	return t;
}