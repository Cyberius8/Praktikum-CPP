#include<iostream>
using namespace std;

int main()
{
	int angka;
	for(int i=0;i<=10;i++){
		cin>>angka;
		if(angka<10){
			switch(angka){
				case 1:
					cout<<"Satu"<<endl;
					break;
				case 2:
					cout<<"Dua"<<endl;
					break;
				case 3:
					cout<<"Tiga"<<endl;
					break;
				case 4:
					cout<<"Empat"<<endl;
					break;
				case 5:
					cout<<"Lima"<<endl;
					break;
				case 6:
					cout<<"Enam"<<endl;
					break;
				case 7:
					cout<<"Tujuh"<<endl;
					break;
				case 8:
					cout<<"Delapan"<<endl;
					break;
				case 9:
					cout<<"Sembilan"<<endl;
					break;
			}
			}
			else if(angka>=10){
				if(angka%2==0){
					cout<<"Odd"<<endl;
				}else{
					cout<<"Even"<<endl;
				}
		}
	}
}