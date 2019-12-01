#include <iostream>
using namespace std;
int main () {
	
	int p=8;
	int l=3;
	int t=8;
	int v=p*l*t;
	if (v<=100){
		cout<<"balok kecil";
		cout<<"\n";
	}else if (v>=100 & v<=200){
		cout<<"balok sedang";
		cout<<"\n";
	}else {
		
		cout<<"balok besar";
		cout<<"\n";
	}
	cout<<v<<"cm^3";
}
