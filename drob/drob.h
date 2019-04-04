#pragma once
#ifndef DROB_H
#define DROB_H
#include<iostream>
class drob
{
	int x;
	int y;
public:
	drob(int a = 0, int b = 1);
	void set_x(int a);
	void set_y(int a);
	int get_x();
	int get_y();
	void print();
	void sokr(int a);
	double result();
	void plus(drob a);
	void minus(drob a);
	void multiply(drob a);
	void divide(drob a);
};

#endif

