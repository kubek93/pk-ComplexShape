#include "stdafx.h"
#include "Prostokat.h"

Prostokat::Prostokat(double x, double y, double a, double b)
	:Shape(x, y)
{
	poz_x = x;
	poz_y = y;
	bok_a = a;
	bok_b = b;
}

void Prostokat::wyswietl()
{
	cout << "PROSTOKAT x: " << this->poz_x << " y: " << this->poz_y << " bok a: " << this->bok_a << " bok b: " << this->bok_b << endl;
}

bool Prostokat::in(double x, double y)
{
	cout << "Punkt x: " << x << " y: " << y << endl;

	if (this->poz_x <= x && this->poz_y <= y && this->bok_a >= x && this->bok_b >= y)
	{
		cout << "Prostokat - TRUE" << endl;
		return true;
	}
	else
	{
		cout << "Prostokat - FALSE" << endl;
		return false;
	}
}


Prostokat::~Prostokat()
{
	cout << "PROSTOKAT - destruktor" << endl;
}