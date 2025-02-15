#include <iostream>

using namespace std;
int jumlah;
struct UNO {
	string nama;
	int kartu;
	UNO *next;
}*head, *tail, *cur, *cur2, *newNode, *del, *before, *play, *BEF;

void addplayer(),countplayer(),removeplayer(),printplayer(),Menu(),Add(),MenuAdd(),Start(),MenuStart();

int main() {
	Menu();
	return 0;
}

void addplayer(string name, int i) {
	if (i>0) {
		newNode = new UNO();
		newNode -> nama = name;
		newNode -> kartu = 7;
		newNode -> next = NULL;
		tail -> next = newNode;
		tail = newNode;
	} else {
		head = new UNO();
		head -> nama = name;
		head -> kartu = 7;
		head -> next = NULL;
		tail = head;
	}
}
int countPlayer() {
	cur = head;
	int n = 0;
	while (cur!=NULL) {
		n++;
		cur = cur->next;
	}
	return n;
}
void removePlayer(int posisi) {
	if (posisi==0) {
		del = head;
		head = head->next;
		delete del;
	} else if(posisi==(countPlayer()-1)) {
		del = tail;
		cur2 = head;
		while (cur2->next != tail) {
			cur2 = cur2->next;
		}
		tail = cur2;
		tail->next = NULL;
		delete del;
	} else {
		int nomor = 0;
		cur2 = head;
		while (nomor <= posisi) {
			if (nomor == posisi-1) {
				before = cur2;
			}
			if (nomor == posisi) {
				del = cur2;
			}
			cur2 = cur2->next;
			nomor++;
		}
		before->next = cur2;
		delete del;
	}
}
void printplayer() {
	cur = head;
	while (cur != NULL ) {
		cout<<cur->nama<<", ";
		cur = cur->next;
	}
} 1
Joko
F1D021021
A
A
A
B
B
B
A
A
A
A
A
A



void Add() {
	string nama;
	cout<<"====TAMBAH PEMAIN====\n"<<endl;
	cout<<"Masukkan Jumlah Pemain\n";
	cout<<">> ";
	cin>>jumlah;
	jumlah+=countPlayer();
	for (int i = countPlayer(); i < jumlah; i++) {
		cout<<"Masukkan Nama Pemain ke-"<<i+1<<endl;
		cout<<">> ";
		cin>>nama;
		addplayer(nama,i);
		cout<<"Pemain Berhasil Ditambah!\n";
	}
	system("cls");
	MenuAdd();
}

void MenuAdd() {
	int Menuadd;
	cout<<jumlah<<" Pemain Berhasil Ditambah!\n\n";
	cout<<"1. Tambah Lagi\n";
	cout<<"2. Kembali Ke Menu Utama\n";
	cout<<">> ";
	cin>>Menuadd;
	switch (Menuadd) {
		case 1:
			system("cls");
			Add();
			break;
		case 2:
			system("cls");
			Menu();
		default:
			cout<<"Input yang anda masukkan salah !!! \n";
			system("pause");
			system("cls");
			MenuAdd();
	}
}

void Start() {
	if (countPlayer()==1) {
		Menu();
	} else {
		play = head;
		for(int i = 0; i < countPlayer(); i++) {
			MenuStart();
			BEF = play;
			play = play->next;
			if (BEF->kartu==1) {
				cout<<"!!!UNOOO!!!\n";
				system("pause");
				system("cls");
			} else if (BEF->kartu==0) {
				cout<<"Selamat "<<BEF->nama<<"!!!"<<endl;
				cout<<"KAMU Telah Menyelesaikan Permainan dan Harus Meninggalkan Permainan!\n";
				removePlayer(i);
				system("pause");
				system("cls");
				if (i==(countPlayer())) {
					Start();
				} else {
					MenuStart();
				}
			}
		}
		Start();
	}
}


void MenuStart() {
	char Menustart;
	cout<<"Sisa Pemain : ";
	printplayer();
	cout<<"\nGiliran "<<play->nama<<"!!"<<endl;
	cout<<"Jumlah Kartu : "<<play->kartu<<endl;
	cout<<"Pass(P)\n";
	cout<<"Draw(D)\n";
	cout<<"Skip(S)\n";
	cout<<">> ";
	cin>>Menustart;
	switch (Menustart) {
		case 'P':
			play->kartu-=1;
			system("cls");
			break;
		case 'D':
			int card;
			cout<<"Jumlah Kartu\n>> ";
			cin>>card;
			play->kartu+=card;
			system("cls");
			break;
		case 'S':
			system("cls");
			break;
		default:
			cout<<"Input yang anda masukkan salah !!! \n";
			system("pause");
			system("cls");
			MenuStart();
			break;
	}
}

void Menu() {
	int menu;
	cout<<"Selamat datang di UNO Card Counter! :)"<<endl;
	cout<<"Menu : "<<endl;
	cout<<"1. Tambah Pemain"<<endl;
	cout<<"2. Mulai Bermain"<<endl;
	cout<<"3. Quit"<<endl;
	cout<<">> ";
	cin>>menu;
	system("cls");
	switch (menu) {
		case 1:
			Add();
			break;
		case 2:
			Start();
			break;
		case 3:
			system("cls");
		default:
			cout<<"Input yang anda masukkan salah !!! \n";
			system("pause");
			system("cls");
			Menu();
	}
}