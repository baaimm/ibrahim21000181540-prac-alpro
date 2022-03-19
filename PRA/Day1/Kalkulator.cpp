#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	
	int a,b, pil;	// pendeklarasion tipe data dan variabel
	float hasil;
	string operasi;
	
	cout<<"|===== KALKULATOR SEDERHANA =====|"<<endl;
	cout<<"|1. Penjumlahan\t\t\t |"<<endl;
	cout<<"|2. Pengurangan\t\t\t |"<<endl;
	cout<<"|3. Perkalian\t\t\t |"<<endl;
	cout<<"|4. Pembagian\t\t\t |"<<endl;
	cout<<"|================================|";
	cout<<endl;
	
	cout<<"Masukan Pilihan Anda : ";
	cin>>pil;
	cout<<"Masukan Bil. Pertama : ";
	cin>>a;
	cout<<"Masukan Bil. Kedua : ";
	cin>>b;	
	
	switch(pil){
	        case 1 : hasil=a+b;
			operasi='+';
			break;
		case 2 : hasil=a-b;
			operasi='-';
			break;
		case 3 : hasil=a*b;
			operasi='*';
			break;
		case 4 : hasil=a/b;
			operasi='/';
			break;
		default :
			cout<<"Pilihan anda salah !!"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<a<<operasi<<b<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
}
