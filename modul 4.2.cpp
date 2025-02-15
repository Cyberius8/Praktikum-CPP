#include<iostream>
using namespace std;
int a,x;
int matriks1[100][100];
int matriks2[100][100];

void Besar(){
	int i=matriks1[a-1][a-1];
	int j=matriks2[a-1][a-1];
	if(i>j){
		cout<<"Angka terbesar dari matriks A dan matriks B adalah "<<i<<" yang merupakan elemen dari matriks A"<<endl;
	} else if(i<j){
		cout<<"Angka terbesar dari matriks A dan matriks B adalah "<<j<<" yang merupakan elemen dari matriks B"<<endl;
	} else if(i==j){
		cout<<"Angka terbesar dari matriks A dan matriks B adalah "<<i<<" yang merupakan elemen dari matriks A dan matriks B"<<endl;
	}
}

void Kecil(){
	int i=matriks1[0][0];
	int j=matriks2[0][0];
	if(i>j){
		cout<<"Angka terkecil dari matriks A dan matriks B adalah "<<j<<" yang merupakan elemen dari matriks B"<<endl;
	} else if(i<j){
		cout<<"Angka terkecil dari matriks A dan matriks B adalah "<<i<<" yang merupakan elemen dari matriks A"<<endl;
	} else if(i==j){
		cout<<"Angka terkecil dari matriks A dan matriks B adalah "<<i<<" yang merupakan elemen dari matriks A dan matriks B"<<endl;
	}
}

void urut(int matriks[100][100],int a,int x){
	for(int baris1=0;baris1<a;baris1++){
		for(int kolom1=0;kolom1<a;kolom1++){
			for(int i=0;i<a;i++){
				for(int j=0;j<a;j++){
					if(matriks[baris1][kolom1]<matriks[i][j]){
						x=matriks[baris1][kolom1];
						matriks[baris1][kolom1]=matriks[i][j];
						matriks[i][j]=x;
					}
				}
			}
		}
	}
}

void input(int matriks[100][100],int a){
	cout<<"masukan nilai matriks"<<endl;
	for(int baris=0;baris<a;baris++){
		for(int kolom=0;kolom<a;kolom++)
		{
			cout<<"isi baris "<<baris+1<<" kolom "<<kolom+1<<" : ";cin>>matriks[baris][kolom];
		}
		cout<<endl;
	}
}

int main(){
	cout<<"ukuran matriks a*a : ";cin>>a;
	cout<<endl;
	cout<<"Matriks Pertama"<<endl;
	input(matriks1,a);
	cout<<endl<<endl;
	cout<<"Matriks Kedua"<<endl;
	input(matriks2,a);
	
	urut(matriks1,a,x);
	urut(matriks2,a,x);
	//hasil
	cout<<"Hasilnya adalah"<<endl;
	Besar();
	Kecil();
}