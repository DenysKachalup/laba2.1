#pragma once
#include <iostream>
#include <string>

using namespace std;

class Line
{
private:
	double first, second;
public:
	Line();
	Line(double, double);
	Line(const Line&);
	~Line();
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value) { first = value; }
	void SetSecond(double value) { second = value; }

	Line& operator = (const Line&);
	operator string() const;

	friend Line operator + (const Line&, const Line&);
	friend Line operator - (const Line&, const Line&);
	friend Line operator * (const Line&, const Line&);
	friend Line operator / (const Line&, const Line&);
	friend Line operator ^ (const Line&, const Line&);

	friend ostream& operator << (ostream&, const Line&);
	friend istream& operator >> (istream&, Line&);

	Line& operator ++();
	Line& operator --();
	Line operator ++(int);
	Line operator --(int);
};

