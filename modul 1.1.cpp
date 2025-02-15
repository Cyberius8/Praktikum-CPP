#include<iostream>
using namespace std;

int main(){
	int Hinata;
	int Kageyama;
	int Tanaka;
	int Kenma;
	int Oikawa;
	int Nishinoya;
	int Yaku;
	int Bokuto;
	int Sawamura;
	int Aone;
	
	cout << "Persebaran Bola Sebelum Tertukar"<<endl;
	cout << "Jumlah Bola Hinata : ";cin>>Hinata;
	cout << "Jumlah Bola Kageyama : ";cin>>Kageyama;
	cout << "Jumlah Bola Tanaka : ";cin>>Tanaka;
	cout << "Jumlah Bola Kenma : ";cin>>Kenma;
	cout << "Jumlah Bola Oikawa : ";cin>>Oikawa;
	cout << "Jumlah Bola Nishinoya : ";cin>>Nishinoya;
	cout << "Jumlah Bola Yaku : ";cin>>Yaku;
	cout << "Jumlah Bola Bokuto : ";cin>>Bokuto;
	cout << "Jumlah Bola Sawamura : ";cin>>Sawamura;
	
	Aone=Oikawa;
	Oikawa=Hinata;
	Hinata=Kenma;
	Kenma=Yaku;
	Yaku=Kageyama;
	Kageyama=Tanaka;
	Tanaka=Nishinoya;
	Nishinoya=Bokuto;
	Bokuto=Sawamura;
	Sawamura=Kageyama-2;
	Kageyama=Aone;
	//sawamura rebut kantong kageyama, 2 bola jatuh
	//Kageyama ngambil oikawa
	cout<<endl;
	cout << "Persebaran Bola Sesudah Tertukar"<<endl;
	cout << "Jumlah Bola Hinata : "<<Hinata<<endl;
	cout << "Jumlah Bola Kageyama : "<<Kageyama<<endl;
	cout << "Jumlah Bola Tanaka : "<<Tanaka<<endl;
	cout << "Jumlah Bola Kenma : "<<Kenma<<endl;
	cout << "Jumlah Bola Oikawa : "<<Oikawa<<endl;
	cout << "Jumlah Bola Nishinoya : "<<Nishinoya<<endl;
	cout << "Jumlah Bola Yaku : "<<Yaku<<endl;
	cout << "Jumlah Bola Bokuto : "<<Bokuto<<endl;
	cout << "Jumlah Bola Sawamura : "<<Sawamura<<endl;
	
}