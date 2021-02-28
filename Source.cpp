#include "Complex.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	Complex h;

	h.Read();
	h.Sub();
	h.Div();
	h.Conj1();
	h.Conj2();
	h.Display();
	h.toString();

	return 0;
}