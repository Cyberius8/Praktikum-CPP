#include<iostream>
using namespace std;
string Nama,Password;
int saldo=1000000,Listrik=150000,Air=100000,Shopping=200000;
void Daftar(),Keluar(),Masuk(),Menu(),Login(),Cek(),TopUp(),Transfer(),Pembayaran(),Profil();

int main(){
	Login();
	return 0;
}

void Daftar(){
	cout<<endl;
	cout<<"MENU DAFTAR"<<endl;
	cout<<"Username : ";cin>>Nama;
	cout<<"Password : ";cin>>Password;
	cout<<"Thankyou"<<endl;
	Login();
}

void Keluar(){
	cout<<endl;
	cout<<"bye";
}

void Masuk(){
	string Nama1,Password1;
	cout<<endl;
	cout<<"MENU MASUK"<<endl;
	cout<<"Username : ";cin>>Nama1;
	cout<<"Password : ";cin>>Password1;
	if(Nama1==Nama&&Password1==Password){
		cout<<"silahkan masuk"<<endl;
		Menu();
	}
	else{
		cout<<"gagal"<<endl;
		Login();
	}
}

void Cek(){
	cout<<endl;
	cout<<"Saldo Anda Adalah : "<<saldo<<endl;
	Menu();
}

void TopUp(){
	cout<<endl;
	int TopUp,Pilih;
	cout<<"MENU TOP UP SALDO"<<endl;
	cout<<"1. Lanjutkan"<<endl;
	cout<<"2. Kembali"<<endl;
	cout<<"Pilih : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			cout<<"masukan jumlah saldo : ";cin>>TopUp;
			saldo+=TopUp;
			cout<<"saldo anda adalah : "<<saldo<<endl;
			Menu();	
			break;
		case 2:
			Menu();
			break;
		default:
			cout<<"Tidak ada Pilihan"<<endl;
			Menu();
	}
}

void Transfer(){
	cout<<endl;
	int Transfer,Rekening,Pilih;
	cout<<"MENU TRANSFER"<<endl;
	cout<<"1. Lanjutkan"<<endl;
	cout<<"2. Kembali"<<endl;
	cout<<"Pilih : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			cout<<"Masukan ID Rekening Penerima : ";cin>>Rekening;
			cout<<"Masukan Nilai Transfer : ";cin>>Transfer;
			saldo-=Transfer;
			cout<<"saldo anda adalah : "<<saldo<<endl;
			Menu();
			break;
		case 2:
			Menu();
			break;
		default:
			cout<<"Tidak ada Pilihan"<<endl;
			Menu();
	}
}

void Pembayaran(){
	cout<<endl;
	int Rekening,Pilih;
	char cek;
	cout<<"MENU PEMBAYARAN"<<endl;
	cout<<"1. Listrik"<<endl;
	cout<<"2. Air"<<endl;
	cout<<"3. E-Shopping"<<endl;
	cout<<"4. Kembali"<<endl;
	cout<<"Pilih : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			cout<<"Listrik"<<endl;
			cout<<"Masukan Nomor Pelanggan : ";cin>>Rekening;
			cout<<"Total Tagihan : "<<Listrik<<endl;
			cout<<"Lanjutkan? (y/n) : ";cin>>cek;
			if(cek=='y'){
				cout<<"Pembayaran Berhasil"<<endl;
				saldo-=Listrik;
				cout<<"saldo anda adalah : "<<saldo<<endl;
				Menu();
			}else{
				cout<<"Pembayaran Gagal"<<endl;
				cout<<"saldo anda adalah : "<<saldo<<endl;
				Menu();
			}
			break;
		case 2:
			cout<<"Air"<<endl;
			cout<<"Masukan Nomor Pelanggan : ";cin>>Rekening;
			cout<<"Total Tagihan : "<<Air<<endl;
			cout<<"Lanjutkan? (y/n) : ";cin>>cek;
			if(cek=='y'){
				cout<<"Pembayaran Berhasil"<<endl;
				saldo-=Air;
				cout<<"saldo anda adalah : "<<saldo<<endl;
				Menu();
			}else{
				cout<<"Pembayaran Gagal"<<endl;
				cout<<"saldo anda adalah : "<<saldo<<endl;
				Menu();
			}
			break;
		case 3:
			cout<<"E-Shopping"<<endl;
			cout<<"Masukan Nomor Pelanggan : ";cin>>Rekening;
			cout<<"Total Tagihan : "<<Shopping<<endl;
			cout<<"Lanjutkan? (y/n) : ";cin>>cek;
			if(cek=='y'){
				cout<<"Pembayaran Berhasil"<<endl;
				saldo-=Shopping;
				cout<<"saldo anda adalah : "<<saldo<<endl;
				Menu();
			}else{
				cout<<"Pembayaran Gagal"<<endl;
				cout<<"saldo anda adalah : "<<saldo<<endl;
				Menu();
			}
			break;
		case 4:
			Menu();
			break;
		default:
			cout<<"Tidak ada Pilihan"<<endl;
			Menu();
	}
}

void Profil(){
	cout<<endl;
	int Pilih,Pilih1;
	cout<<"MENU PROFIL"<<endl;
	cout<<"1. Cek Profil"<<endl;
	cout<<"2. Ubah Profil"<<endl;
	cout<<"3. Kembali"<<endl;
	cout<<"Pilih : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			cout<<"MENU CEK PROFIL"<<endl;
			cout<<"1. Cek Username"<<endl;
			cout<<"2. Cek Password"<<endl;
			cout<<"3. Kembali"<<endl;
			cout<<"Pilih : ";cin>>Pilih1;
			switch(Pilih1){
				case 1:
					cout<<"Username anda : "<<Nama;
					Menu();
					break;
				case 2:
					cout<<"Password anda : "<<Password;
					Menu();
					break;
				case 3:
					Menu();
					break;
				default:
					cout<<"Tidak ada Pilihan"<<endl;
					Menu();
			}
			break;
		case 2:
			cout<<"MENU UBAH PROFIL"<<endl;
			cout<<"1. Ubah Username"<<endl;
			cout<<"2. Ubah Password"<<endl;
			cout<<"3. Kembali"<<endl;
			cout<<"Pilih : ";cin>>Pilih1;
			switch(Pilih1){
				case 1:
					cout<<"Username baru anda : ";cin>>Nama;
					Menu();
					break;
				case 2:
					cout<<"Password baru anda : ";cin>>Password;
					Menu();
					break;
				case 3:
					Menu();
					break;
				default:
					cout<<"Tidak ada Pilihan"<<endl;
					Menu();
			}
			break;
		case 3:
			Menu();
			break;
		default:
			cout<<"Tidak ada Pilihan"<<endl;
			Menu();
	}
}

void Menu(){
	int Pilih;
	cout<<endl<<endl;
	cout<<"1. Cek Saldo"<<endl;
	cout<<"2. Top Up Saldo"<<endl;
	cout<<"3. Transfer"<<endl;
	cout<<"4. Pembayaran"<<endl;
	cout<<"5. Profil"<<endl;
	cout<<"6. Log Out"<<endl;
	cout<<"Pilih : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			Cek();
			break;
		case 2:
			TopUp();
			break;
		case 3:
			Transfer();
			break;
		case 4:
			Pembayaran();
			break;
		case 5:
			Profil();
			break;
		case 6:
			Login();
			break;
		default:
			cout<<"salah"<<endl;
	}
}

void Login(){
	int Pilih;
	cout<<"1. Masuk"<<endl;
	cout<<"2. Daftar"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<"Pilih : ";cin>>Pilih;
	switch(Pilih){
		case 1:
			Masuk();
			break;
		case 2:
			Daftar();
			break;
		case 3:
			Keluar();
			break;
		default:
			cout<<"salah"<<endl;
	}
}