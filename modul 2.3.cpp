#include <iostream>
using namespace std;
int main(){
	string Nama;
	cout<< "Masukkan Nama Anda : ";cin>>Nama;cout<<endl;
	cout<< "IDENTITAS ---> "<<Nama<<endl;
	cout<<endl;
	int tgll,blnl,thnl,tgls,blns,thns;
	cout<< "Lahir"<<endl;
	cout<< "Tanggal Lahir : ";cin>>tgll;
	cout<< "Bulan Lahir : ";cin>>blnl;
	cout<< "Tahun Lahir: ";cin>>thnl;
	cout<< "TANGGAL SAAT INI"<<endl;
	cout<< "Tanggal Sekarang: ";cin>>tgls;
	cout<< "Bulan Sekarang: ";cin>>blns;
	cout<< "Tahun Sekarang: ";cin>>thns;
	int days=0;
	
	if(tgls<tgll){
		tgls+=31;
		blns-=1;
	}
	int hari=tgls-tgll;
	
	if(blns<blnl){
		blns+=12;
		thns-=1;
	}
	int bulan=blns-blnl;
	
	for(int t=thnl;t<thns;t++){
		if(t%4==0){
			days+=366;
		}else if(t%4!=0){
			days+=365;
		}
	}
	int tahun=days/365;
	cout<<endl<<endl;
	cout<<"UMUR ANDA SAAT INI"<<endl;
	cout<<tahun<<" Tahun "<<bulan<<" bulan "<<hari<<" Hari";
	
}