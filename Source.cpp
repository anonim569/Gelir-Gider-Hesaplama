#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int yardýmcý1;
	int yardýmcý2;
	int gelir;
	int gider;
	int gelirtoplam = 0;
	int gidertoplam = 0;
	
	


	cout << "Kaç tane geliriniz var : ";
	cin >> gelir ;
	
	cout << " " << endl;

	cout << "Kaç tane gideriniz var : ";
	cin >> gider;
	
	cout << " " << endl;

	for (int i = 0;  i < gelir;  i++) 
	{ 
		cout << "Gelirinizi Giriniz: ";
		
		cin >> yardýmcý1;
		gelirtoplam = gelirtoplam + yardýmcý1;
	}

	cout << " " << endl;

	for (int i = 0; i < gider; i++)
	{
		cout << "Gidirenizi Giriniz: ";
		cin >> yardýmcý2;
		gidertoplam = gidertoplam + yardýmcý2;
	}

     int kar;
	 kar = gelirtoplam - gidertoplam; 

	cout << " " << endl;

	cout << "Toplam geliriniz : " << gelirtoplam << endl;
	cout << "Toplam gideriniz :" << gidertoplam << endl;
	cout << "Toplam kar ýnýz :" << kar ;

	return 0;
}