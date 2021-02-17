#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int yardimci1;
	int yardimci2;
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
		
		cin >> yardimci1;
		gelirtoplam = gelirtoplam + yardimci1;
	}

	cout << " " << endl;

	for (int i = 0; i < gider; i++)
	{
		cout << "Gidirenizi Giriniz: ";
		cin >> yardimci2;
		gidertoplam = gidertoplam + yardimci2;
	}

     int karvezarar;
	 karvezarar = gelirtoplam - gidertoplam; 
	 
	cout << " " << endl;
	
	
	cout << "Toplam geliriniz : " << gelirtoplam << endl;
	cout << "Toplam gideriniz :" << gidertoplam << endl;
	

	if (karvezarar < 0) {
		cout << "Zararınız: " << karvezarar;
	}
	else {

    cout << "Toplam kar ınız :" << karvezarar ;

  	}


	return 0;
}
