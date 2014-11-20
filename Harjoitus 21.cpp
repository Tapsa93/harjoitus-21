/*Harjoitus 21 (Palautus vko 48)
Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia :

int KysyValinta(void);

->KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron(0 - 6)

double Summa(float luku1, int luku2);

->Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten*/

//************
//Tapio Pekkarinen
//Harjoitus 21
//20.11.2014
//Versio 1.0

#include <iostream>
using namespace std;
int kysyvalinta();
double summa(float, int); 
int main()
{
	int luku1, luku2;
	cout << "Anna luku ";
	cin >> luku1;
	cout << "Anna luku ";
	cin >> luku2;
	do
	{
		int valinta = kysyvalinta();
		if (valinta == 1)
		{
			cout << "Summa on " << summa(luku1, luku2);
			//kysyvalinta();
		}
		else if (valinta == 2)
		{
			cout << "Erotus on " << luku1 - luku2;
			//kysyvalinta();
		}
		else if (valinta == 3)
		{
			cout << "Tulo on " << luku1 * luku2;
			//kysyvalinta();
		}
		else if (valinta == 4)
		{
			cout << "Osamaara on " << luku1 / luku2;
			//kysyvalinta();
		}
		else if (valinta == 5)
		{
			cout << "Jakojaannos on " << luku1%luku2;
			//kysyvalinta();
		}
		else if (valinta == 6)
		{
			cout << "Anna luku";
			cin >> luku1;
			cout << "Anna luku";
			cin >> luku2;
			//kysyvalinta();
		}
		else if (valinta == 0)
		{
			return 0;
		}
	} while (true);

	
	return 0;
}
	int kysyvalinta()
	{
		int valinta;
		cout << "\nValikko";
		cout << "\n\n1) Summa";
		cout << "\n\n2) Erotus"; 
		cout << "\n\n3) Tulo";
		cout << "\n\n4) Osamaara"; 
		cout << "\n\n5) Jakojaannos"; 
		cout << "\n\n6) Anna uudet luvut";
		cout << "\n\n0) Lopeta";
		cout << "\nValintasi: ";
		cin >> valinta;
		return valinta;
	}
	double summa(float luku1, int luku2)
	{
		double luku;
		double summa;
		luku = luku1 + luku2;
		return luku;
	}




