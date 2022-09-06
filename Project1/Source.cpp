#include <iostream>
#include "Opiskelija.h"

using namespace std;

template <typename Tyyppi>
double keskiarvo(Tyyppi luku1, Tyyppi luku2, Tyyppi luku3)
{
	return (luku1 + luku2 + luku3) / 3.0;
}

template <typename Tyyppi>
Tyyppi etsiPienin(Tyyppi* taulukko, int n)
{
	Tyyppi pienin = taulukko[0];

	for (int i = 1; i < n; i++)
	{
		if (taulukko[i] < pienin)
		{
			pienin = taulukko[i];
		}
	}
	return pienin;
}

template <typename Tyyppi>
void järjestä(Tyyppi *taulukko, int n)
{
	int i, j;
	Tyyppi temp;

	for (i = 0; i < n; i++)
	{
		for (j = i +1 ; j < n; j++)
		{
			if (taulukko[i] > taulukko[j])
			{
				temp = taulukko[j];
				taulukko[j] = taulukko[i];
				taulukko[i] = temp;
			}
		}
	}
}

template <typename Tyyppi>
bool contains(Tyyppi* list, int n, Tyyppi object)
{
	bool cont = false;

	for (int i = 0; i < n; i++)
	{
		if (list[i] == object)
		{
			cont = true;
			break;
		}
	}
	return cont;
}

int main()
{
	double ka1 = keskiarvo(2.9, 4.53, 6.89);
	double ka2 = keskiarvo(19, 54, 61);

	cout << "keskiarvo 1: " << ka1 << endl;
	cout << "keskiarvo 2; " << ka2 << endl;

	int taulu[] = { 5,6,1,2,0,5,6 };
	int p1 = etsiPienin(taulu, 7);

	double taulu2[] = { -100,0.034,66,-4.66,0,554.32,-9.877,6.33,5 };
	double p2 = etsiPienin(taulu2, 9);

	cout << "pienin luku 1: " << p1 << endl;
	cout << "pienin luku 2: " << p2 << endl;

	järjestä(taulu2, 9);

	for (int i = 0; i < 9; i++)
	{
		cout << taulu2[i] << " ";
	}
	cout << endl;

	Opintosuoritus os1("Kurssi1", 5, 3);
	Opintosuoritus os2("Kurssi2", 3, 3);
	Opintosuoritus os3("Kurssi3", 5, 5);

	double luk = keskiarvo(os1, os2, os3);

	cout << "Kurssien ka: " << luk << endl;
	cout << endl;
}