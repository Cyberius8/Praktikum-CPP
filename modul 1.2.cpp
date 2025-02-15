#include<iostream>
using namespace std;

int main(){
	int detik;
	cout << "masukan detik dalam dunia nyata : "; cin>>detik;
	int nyata=detik;
	int jamnyata=nyata/3600;
	int menitnyata1=nyata/60;
	int menitnyata2=menitnyata1%60;
	int detiknyata=nyata%60;
	cout << "waktu dunia nyata adalah "<< jamnyata<<" jam"<<" "<<menitnyata2<<" menit"<<" "<<detiknyata<<" detik"<<endl;
	int lain=nyata/5;
	int jamlain=lain/3600;
	int menitlain1=lain/60;
	int menitlain2=menitlain1%60;
	int detiklain=lain%60;
	cout << "waktu dunia lain adalah "<< jamlain<<" jam"<<" "<<menitlain2<<" menit"<<" "<<detiklain<<" detik"<<endl;
	int bawah=nyata/8;
	int jambawah=bawah/3600;
	int menitbawah1=bawah/60;
	int menitbawah2=menitbawah1%60;
	int detikbawah=bawah%60;
	cout << "waktu dunia bawah adalah "<< jambawah<<" jam"<<" "<<menitbawah2<<" menit"<<" "<<detikbawah<<" detik"<<endl;
}