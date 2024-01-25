#include <iostream>
#include <fstream>
using namespace std;

int main(){
	float paliwo = 0;
	int osoby = 0;
	int odleglosc = 0;
	int spalanie = 0;
	int ilosc_paliwa =0;
	float cena =0;
	float cena_na_osobe =0;
	cout<<"Podaj odleglosc trasy"<<endl;
	cin>>odleglosc;
	cout<<"Podaj spalanie auta (w formacie xL)"<<endl;
	cin>>spalanie;
	cout<<"Podaj ilosc osob w aucie"<<endl;
	cin>>osoby;
	cout<<"Podaj koszt paliwa"<<endl;
	cin>>paliwo;
	ilosc_paliwa = spalanie*odleglosc/100;
	cena=ilosc_paliwa*paliwo;
	cena_na_osobe=cena/osoby;
	cout<<cena_na_osobe<<endl;
	fstream plik;
	plik.open("arkusz.txt" , ios::out);
	plik<<cena_na_osobe<<"-cena na "<<osoby<<" osob"<<endl;
	plik.close();
	return 0;
}
