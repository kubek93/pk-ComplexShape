#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Kolo :public Shape
{
protected:
	double poz_x;
	double poz_y;
	double sr;


public:
	Kolo(double, double, double);
	void wyswietl();
	virtual bool in(double, double);
	virtual void movePosition(double, double);
	virtual ~Kolo();
};