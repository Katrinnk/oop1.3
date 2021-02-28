#include "Complex.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Complex::Display()
{
	cout << endl;
	cout << "re1= " << x1 << endl;
	cout << "im1= " << y1 << endl;
	cout << "re2= " << x2 << endl;
	cout << "im2= " << y2 << endl;
	cout << "sub= " << Sub() << endl;
	cout << "div= " << Div() << endl;
	cout << "conj(1)= " << Conj1() << endl;
	cout << "conj(2)= " << Conj2() << endl;
}
void Complex::Init(double re1, double im1, double re2, double im2)
{
	x1 = re1;
	y1 = im1;
	x2 = re2;
	y2 = im2;
}
void Complex::Read()
{
	double x1, y1, x2, y2;
	cout << "Input complex value:" << endl;
	cout << "re1= "; cin >> x1;
	cout << "im1= "; cin >> y1;
	cout << "re2= "; cin >> x2;
	cout << "im2= "; cin >> y2;
	Init(x1, y1, x2, y2);
}
double Complex::Sub()
{
	double l;
	l = (x1 - x2, y1 - y2);
	return l;
}
double Complex::Div()
{
	double m;
	m = (x1 * x2 + y1 * y2, x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2);
	return m;
}
double Complex::Conj1()
{
	double k;
	k = (x1, -y1);
	return k;
}
double Complex::Conj2()
{
	double v;
	v = (x2, -y2);
	return v;
}
string Complex::toString()
{
	stringstream sout;
	sout << "re1= " << x1 << endl;
	sout << "im1= " << y1 << endl;
	sout << "re2= " << x2 << endl;
	sout << "im2= " << y2 << endl;
	sout << "sub= " << Sub() << endl;
	sout << "div= " << Div() << endl;
	sout << "conj(1) =" << Conj1() << endl;
	sout << "conj(2)= " << Conj2() << endl;
	
	return sout.str();
}
