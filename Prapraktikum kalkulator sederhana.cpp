#include <iostream>
using namespace std;

int main ()
{
	float bilangan_1,bilangan_2;
	char operasi;
	
	cout<<"======================================="<<endl;
	cout<<"Program Kalkulator Sederhana 2 Bilangan"<<endl;
	cout<<"======================================="<<endl;
	cout<<"\nMasukkan bilangan pertama : ";
	cin>>bilangan_1;
	cout<<"Pilih Operasi (+) = ";
	cin>>operasi;
	cout<<"Masukkan bilangan kedua : ";
	cin>>bilangan_2;
	cout<<"\n---------------------------------------"<<endl;
	switch  (operasi){
		case '+':
		cout<<bilangan_1<<" + "<<bilangan_2<<" = "<<bilangan_1+bilangan_2<<endl;
		break;
		default:	
		cout<<"Operasi yang anda masukkan salah/Error"<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	cout<<"\n======================================="<<endl;
}
