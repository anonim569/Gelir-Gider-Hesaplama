#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int yard�mc�1;
	int yard�mc�2;
	int gelir;
	int gider;
	int gelirtoplam = 0;
	int gidertoplam = 0;
	
	


	cout << "Ka� tane geliriniz var : ";
	cin >> gelir ;
	
	cout << " " << endl;

	cout << "Ka� tane gideriniz var : ";
	cin >> gider;
	
	cout << " " << endl;

	for (int i = 0;  i < gelir;  i++) 
	{ 
		cout << "Gelirinizi Giriniz: ";
		
		cin >> yard�mc�1;
		gelirtoplam = gelirtoplam + yard�mc�1;
	}

	cout << " " << endl;

	for (int i = 0; i < gider; i++)
	{
		cout << "Gidirenizi Giriniz: ";
		cin >> yard�mc�2;
		gidertoplam = gidertoplam + yard�mc�2;
	}

     int kar;
	 kar = gelirtoplam - gidertoplam; 

	cout << " " << endl;

	cout << "Toplam geliriniz : " << gelirtoplam << endl;
	cout << "Toplam gideriniz :" << gidertoplam << endl;
	cout << "Toplam kar �n�z :" << kar ;

	return 0;
}