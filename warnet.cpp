/*Program Billing Warnet*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	int j1,j2,selisih,jam,detik,menit,sisa;
	float tarif;
	cout<<"Masukkan Jam Masuk";
	cin>>j1;
	cout<"Masukkan Jam Keluar";
	cin>>j2;
	selisih =j2-j1;
	tarif = selisih*5000/3600;
    jam = selisih/3600;
    sisa = selisih%3600;
    menit = sisa/60;
    detik = sisa%60;
    cout<<"Dia Bermain Selama"<<jam<<"jam"<<menit<<"menit"<<detik<<"detik\n";
    printf("Tarif Anda : %0.2f", tarif);
    getch();
}
