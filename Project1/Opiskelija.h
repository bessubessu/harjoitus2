#pragma once
#ifndef OPISKELIJA_H
#define OPISKELIJA_H
#include <string>

using namespace std;

class Opintosuoritus
{
	friend int operator+(const Opintosuoritus &os1, const Opintosuoritus &os2)
	{
		return os1.arvosana + os2.arvosana;
	}

	friend int operator+(const int luku, const Opintosuoritus &os2)
	{
		return luku + os2.arvosana;
	}

public:
	Opintosuoritus(string n, int op, int a) : kurssinNimi(n), opintopisteet(op), arvosana(a){}
	Opintosuoritus() : kurssinNimi(""), opintopisteet(0), arvosana(0){}

	~Opintosuoritus(void){}

private:
	string kurssinNimi;
	int opintopisteet;
	int arvosana;
};
#endif