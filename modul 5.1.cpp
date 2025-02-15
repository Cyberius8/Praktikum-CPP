#include <iostream>
#include <iomanip>
using namespace std;
int MHSW=0;

struct Mahasiswa{
	string Nama[100];
	string NIM[100];
	string TTL[100];
};Mahasiswa MHS;

struct buku{
    string judul[100][100];
    string ID[100][100];
    string genre[2][14]=   {{"T4"      ,"H1"    ,"K9"    ,"F7"     ,"R3"      ,"L0"    ,"A2"       ,"H3"     ,"S7"    ,"D1"         ,"XX"},
                            {"Thriller","Horror","Komedi","Fantasi","Romantis","Ilmiah","Petualang","Sejarah","Sastra","Dokumentasi","Kosong"}};
    string jenis[2][14]=   {{"NV"   ,"KM"   ,"EN"          ,"DO"     ,"BI"      ,"KS"   ,"XX"},
                            {"Novel","Komik","Ensiklopedia","Dongeng","Biografi","Kamus","Kosong"}};
    string penulis[2][14]= {{"FD"     ,"FI"         ,"NA"      ,"SM"         ,"KD"     ,"XX"},
                            {"Firdaus","Fajar Islam","Nadya A.","Surgi Mukti","Kasandi","Kosong"}};
    string penerbit[2][14]={{"AN"  ,"GR"     ,"ER"       ,"DE"       ,"XX"},
                            {"ANDI","GRAMEDIA","ERLANGGA","DEEPUBLIS","Kosong"}};
    string tahun[2][14]=   {{"11"  ,"12"   ,"13"    ,"14"   ,"15"  ,"16"   ,"17"    ,"18"     ,"19"   ,"20"  ,"21"  ,"22"     ,"28"      ,"XX"},
                            {"MMXI","MMXII","MMXIII","MMXIV","MMXV","MMXVI","MMXVII","MMXVIII","MMXIX","MMXX","MMXXI","MMXXII","MMXXVIII","Kosong"}};
};buku BK;

void Menu(),TDP(),DPB(),CD(),CK();

int main(){
	Menu();
}

void Menu(){
	int Pilih;
	cout<<"Menu Program"<<endl;
	cout<<"1. Tambah Data Peminjam"<<endl;
	cout<<"2. Data Peminjam Buku"<<endl;
	cout<<"3. Cek Data"<<endl;
	cout<<"4. Cetak kartu"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Pilihan : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			TDP();
			break;
		case 2:
			DPB();
			break;
		case 3:
			CD();
			break;
		case 4:
			CK();
			break;
		case 5:
			cout<<"EXIT";
			break;
		default:
			cout<<"salah";
	}
}

void TDP(){
	char pilih;
	int banyakMHS=1, banyakBK=1;
	MHSW++;int BOOK=0;
	cout<<"Mahasiswa ke-"<<MHSW<<endl;
	
	cout<<"Nama Mahasiswa             : ";
	if((MHSW==MHSW)){
		getline(cin,MHS.Nama[MHSW-1]);
	}getline(cin,MHS.Nama[MHSW-1]);
	
	cout<<"NIM                        : ";
	getline(cin,MHS.NIM[MHSW-1]);
	
	cout<<"Tanggal Lahir (dd/mm/yyyy) : ";
	cin>>MHS.TTL[MHSW-1];
	
	do{
		cout<<"================================================================================"<<endl;
		BOOK++;
		cout<<"\tBuku Ke-"<<BOOK<<endl;
		cout<<"\tNama Buku : ";
		if(BOOK==BOOK){
			getline(cin,BK.judul[MHSW-1][BOOK]);
		}getline(cin,BK.judul[MHSW-1][BOOK]);
		
		cout<<"\tID Buku   : ";
		cin>>BK.ID[MHSW-1][BOOK];
		cout<<"Tambah Buku Lagi?? (y/n) : ";
		cin>>pilih;
	}while(pilih=='y');
	system("pause");
	system("cls");
	Menu();
}

void DPB(){
	cout<<"DATA PEMINJAM BUKU"<<endl;
	for(int i=0;i<MHSW;i++){
		cout<<i+1<<". "<<MHS.Nama[i]<<endl;
		for(int j=0;j<100;j++){
			BK.judul[i][j];
			if(BK.judul[i][j]!=""){
				cout<<"\t===> "<<BK.judul[i][j]<<endl;
			}
		}
	}
	system("pause");
    system("cls"); 
    Menu();
}

int Umur(string TGL){
	string hari,bulan,tahun;
	hari+=TGL[0];hari+=TGL[1];
	bulan+=TGL[3];bulan+=TGL[4];
	tahun+=TGL[6];tahun+=TGL[7];tahun+=TGL[8];tahun+=TGL[9];
	int day=stoi(hari);
	int month=stoi(bulan);
	int year=stoi(tahun);
	int dayx=23;int monthx=05;int yearx=2022;int yeary=0;
	
	if(year>yearx){
		cout<<"ga ada"<<endl;
	}else{
		if((monthx>=month)){
			yeary=yearx-year;
		}else{
			yeary=(yearx-year)-1;
		}
	}
	return yeary;
}

void CD(){
	string cari;
	cout<<"Input Nama : ";
	if(MHSW==MHSW){
		getline(cin,cari);
	}getline(cin,cari);
	
	for(int i=0;i<100;i++){
		int check=MHS.Nama[i].find(cari);
		string TGL=MHS.TTL[i];
		if(check!=-1){
			cout<<"Data "<<cari<<" Ditemukan : "<<endl;
			cout<<"Nama : "<<MHS.Nama[i]<<endl;
			cout<<"Nim : "<<MHS.NIM[i]<<endl;
			cout<<"Tanggal Lahir : "<<MHS.TTL[i]<<endl;
			cout<<"Umur : "<<Umur(TGL)<<endl;
		}
	}
	system("pause");
    system("cls"); 
    Menu();
}

void CK(){
	string cari;
	cout<<"Input Nama : ";
	if(MHSW==MHSW){
		getline(cin,cari);
	}getline(cin,cari);
	
	for(int i=0;i<100;i++){
		int n=MHS.Nama[i].length();
		int check=MHS.Nama[i].find(cari);
		string TGL=MHS.TTL[i];
		if(check!=-1){
			cout<<"                                    PERPUSTAKAAN TEKNIK"<<endl;
            cout<<"                                    UNIVERSITAS MATARAM"<<endl;
            cout<<"                              Jln. Majapahit No. 62 Mataram"<<endl;
            cout<<"==================================================================================================="<<endl;
            cout<<"Nama : "<<MHS.Nama[i]<<setiosflags(ios::right)<<setw(82-n)<<"TTL  : "<<MHS.TTL[i]<<endl;
            cout<<"NIM  : "<<MHS.NIM[i]<<"\t\t\t\t\t\t\t\t  Umur : "<<Umur(TGL)<<endl;
            cout<<"..................................................................................................."<<endl;
            cout<<"|No.|          Judul         |    Genre    |  Jenis Buku  |   Penulis   | Penerbit | Tahun Terbit |"<<endl;
            cout<<"..................................................................................................."<<endl;
            for (int f = 0; f < 100; f++){
                string genre = "" ; genre += (BK.ID[i][f])[0];genre += (BK.ID[i][f])[1];
                string jenis = ""; jenis += (BK.ID[i][f])[2];jenis += (BK.ID[i][f])[3];
                string penulis = ""; penulis += (BK.ID[i][f])[4];penulis += (BK.ID[i][f])[5];
                string terbit = ""; terbit += (BK.ID[i][f])[6];terbit += (BK.ID[i][f])[7];
                string year = ""; year += (BK.ID[i][f])[8];year += (BK.ID[i][f])[9];
                for (int g = 0; g < 14; g++){
                    if (genre==BK.genre[0][g]){
                        genre = BK.genre[1][g];
                    }
                    if (jenis==BK.jenis[0][g]){
                        jenis = BK.jenis[1][g];
                    }
                    if (penulis==BK.penulis[0][g]){
                        penulis = BK.penulis[1][g];
                    }
                    if (terbit==BK.penerbit[0][g]){
                        terbit = BK.penerbit[1][g];
                    }
                    if (year==BK.tahun[0][g]){
                        year = BK.tahun[1][g];
                    }   
                }
                if (BK.judul[i][f]!=""){
                    cout<<"| "<<f<<" | "<<setiosflags(ios::right)<<setw(22)<<BK.judul[i][f];cout<<" | "<<setiosflags(ios::right)<<setw(11)<<genre;
                    cout<<" | "<<setiosflags(ios::right)<<setw(12)<<jenis;cout<<" | "<<setiosflags(ios::right)<<setw(11)<<penulis;
                    cout<<" | "<<setiosflags(ios::right)<<setw(8)<<terbit;cout<<" | "<<setiosflags(ios::right)<<setw(12)<<year<<" | ";
                    cout<<"\n..................................................................................................."<<endl;
                }
            }
            cout<<endl<<setw(32)<<"Petugas Perpustakaan"<<setw(61)<<"Kepala Penanggung Jawab\n\n\n\n\n";
            cout<<setw(34)<<"Nuzhairil Arsanurrahman"<<setw(53)<<"Shafa Asyari Ramadhan"<<endl<<endl; 
		}
	}
	system("pause");
    system("cls"); 
    Menu();
}