#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	cout<<" Menghitung Jumlah 6 Suku Pertama"<<endl;


	int jmldr,i;

	cout<<"Jumlah Deret Yang Di Inginkan: ";
	cin>>jmldr;

	cout<<"--------------------------------------------"<<endl;
	for(i=1; i<=jmldr;i++) {
		cout<<i*i*i <<" ";
	}
	cout<<endl;
	return 0;
}
