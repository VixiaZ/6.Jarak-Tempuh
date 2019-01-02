#include <iostream>
using namespace std ;

int main ()
	{
		int v,t,S;
		
		cout <<"-----Menghitung jarak tempuh Perjalanan-----"<<endl;
		
		cout <<"\nmasukan Kecepatan M/Detik = ";
		cin >>v;
		
		cout <<"\nmasukan Waktu yang di tempuh (Detik) = ";
		cin >>t;
		
		//Rumus Menghitung jarak tempuh by zulfikar
		S = v * t;
		cout <<"Jarak yang di tempuh adalah = "<<S<<"Meter";
		
		return 0;
	}
