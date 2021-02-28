#pragma once

#include <string>
#include <sstream>

using namespace std;

class Complex
{
private:
	double x1, x2, y1, y2;
public:
	double GetRe1() const { return x1; }
	double GetRe2() const { return x2; }
	double GetIm1() const { return y1; }
	double GetIm2() const { return y2; }
	void SetRe1(double value) { x1 = value; }
	void SetRe2(double value) { x2 = value; }
	void SetIm1(double value) { y1 = value; }
	void SetIm2(double value) { y2 = value; }

	void Init(double, double, double, double);
	void Read();
	void Display();
	
	double Sub();
	double Div();
	double Conj1();
	double Conj2();

	string toString();
};

