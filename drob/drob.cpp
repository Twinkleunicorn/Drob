#include "Drob.h"
#include<iostream>
using namespace std;

drob::drob(int a, int b)
{
	set_x(a);
	set_y(b);
	get_x();
	get_y();
	print();
	sokr(a);
	result();
}

void drob::set_x(int a)
{
	x = a;
}

void drob::set_y(int a)
{
	if (a != 0)
		a = y;
	else
		a = 1;
}

int drob::get_x()
{

	return x;
}

int drob::get_y()
{
	return y;
}

void drob::print()
{
	cout << x << " / " << y << endl;
}

void drob::sokr(int a)
{
}

double drob::result()
{
	return x / y;
}

void drob::plus(drob a)
{
	x = ((a.x * y) + (a.y*x));
	y = a.y*y;

}
void drob::minus(drob a)
{
	x = ((a.x * y) - (a.y*x));
	y = a.y*y;
}

void drob::multiply(drob a)
{
	x = a.x *x;
	y = a.y*y;
}
void drob::divide(drob a)
{
	x = a.y *x;
	y = a.x*y;
}