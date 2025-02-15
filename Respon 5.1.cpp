#include <iostream>
using namespace std;

int MHS;
int tahunskrg=22;
double IPK=2.55;
int tahun=2022;
string Jurusan;

struct Data{
	string nama[10];
	string nim[10];
	string kodePA[10];
	int Lahir[10];
	double ipk[10];
};Data DT;
void Input(),Tampil(),SEA(),Beasiswa();

int main(){
	Input();
	Tampil();
	cout<<endl;
	SEA();
	cout<<endl;
	Beasiswa();
}

void Input(){
	cout<<"Masukan Jumlah Mahasiswa : ";cin>>MHS;
	for(int i=0;i<MHS;i++){
		cout<<"Data Mahasiswa Ke-"<<i+1<<endl;
		cout<<"Nama : ";
		if(i==i){
			getline(cin,DT.nama[i]);
		}getline(cin,DT.nama[i]);
		cout<<"NIM : ";cin>>DT.nim[i];
		cout<<"Kode PA : ";cin>>DT.kodePA[i];
		cout<<"Tahun Lahir : ";cin>>DT.Lahir[i];
	}
}

void Tampil(){
	system("cls");
	for(int i=0;i<MHS;i++){
		cout<<"================================================="<<endl;
		cout<<"Data Mahasiswa Ke-"<<i+1<<endl;
		cout<<"Nama		: "<<DT.nama[i]<<endl;
		string NIM=DT.nim[i];
		string BOOM;
		BOOM+=NIM[4];BOOM+=NIM[5];
		int boom=stoi(BOOM);
		cout<<"NIM		: "<<DT.nim[i]<<endl;
		cout<<"Angkatan	: "<<boom<<endl;
		int semsetr=tahunskrg-boom;
		int semestri=semsetr*2;
		cout<<"Semester	: "<<semestri-2<<endl;
		DT.ipk[i]=IPK;
		cout<<"IPK		: "<<DT.ipk[i]<<endl;
		IPK=DT.ipk[i]+0.13;
		if(NIM[2]=='A'){
			Jurusan="Teknik Sipil";
		}
		else if(NIM[2]=='B'){
			Jurusan="Teknik Mesin";
		}
		else if(NIM[2]=='C'){
			Jurusan="Teknik Elektro";
		}
		else if(NIM[2]=='D'){
			Jurusan="Teknik Informatika";
		}
		else if(NIM[2]=='E'){
			Jurusan="Arsitektur";
		}
		cout<<"Jurusan		: "<<Jurusan<<endl;
		int lahir=DT.Lahir[i];
		cout<<"Usia		: "<<tahun-lahir-1<<endl;
	}
}

void SEA(){
	cout<<"================================================="<<endl;
	cout<<"Berikut Nama Mahasiswa yang diampu oleh SEA : "<<endl;
	string PA="SEA";
	for(int i=0;i<MHS;i++){
		if(DT.kodePA[i]=="SEA"){
			cout<<"- "<<DT.nama[i]<<endl;
		}
	}
}

void Beasiswa(){
	cout<<"================================================="<<endl;
	cout<<"Berikut Nama yang Dapat Beasiswa : "<<endl;
	int Bea=3.00;
	for(int i=0;i<MHS;i++){
		if(DT.ipk[i]>Bea){
			cout<<"- "<<DT.nama[i]<<endl;
		}
	}
}