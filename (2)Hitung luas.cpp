#include <iostream>
using namespace std;
int main(){
	int pilihan;
	int luas, alas, tinggi, panjang, lebar;
	cout<<"1. Hitung Luas Segitiga\n";
	cout<<"2. Hitung Luas Persegi\n";
	cin>>pilihan;
	switch (pilihan){
		case 1:
			cout<<"Hitung luas segitiga\n";
			cout<<"Masukan panjang alas: ";
			cin>>alas;
			cout<<"Masukan tinggi: ";
			cin>>tinggi;
			cout<<"Luas segitiga = "<<0.5*alas*tinggi<<"cm^2";
			break;
		case 2:
			cout<<"Hitung luas persegi\n";
			cout<<"Masukan panjang: ";
			cin>>panjang;
			cout<<"Masukan lebar: ";
			cin>>lebar;
			cout<<"Luas persegi = "<<panjang*lebar<<"cm^2";
			break;
		default:
			cout<<"No Result";
	}
}
