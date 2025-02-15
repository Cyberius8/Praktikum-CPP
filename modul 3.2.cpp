#include<iostream>
using namespace std;

int main(){
	int a=3;
	int matriks[a][a];
	double kofaktor[a][a],determinan,invers[a][a],adjoin[a][a];
	cout<<"masukan nilai matriks1"<<endl;
	for(int baris=1;baris<=a;baris++){
		for(int kolom=1;kolom<=a;kolom++){
			cout<<"isi baris "<<baris<<" kolom "<<kolom<<" : ";cin>>matriks[baris][kolom];
		}
		cout<<endl;
	}
	
	cout<<"hasil matriks"<<endl;
	for(int baris=1;baris<=a;baris++){
		for(int kolom=1;kolom<=a;kolom++){
			cout<<matriks[baris][kolom]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"determinan matriks"<<endl;
	kofaktor[1][1]=(matriks[2][2]*matriks[3][3])-(matriks[3][2]*matriks[2][3]);
	kofaktor[1][2]=((matriks[2][1]*matriks[3][3])-(matriks[3][1]*matriks[2][3]))*-1;
	kofaktor[1][3]=(matriks[2][1]*matriks[3][2])-(matriks[3][1]*matriks[2][2]);
	determinan=(matriks[1][1]*kofaktor[1][1])+(matriks[1][2]*kofaktor[1][2])+(matriks[1][3]*kofaktor[1][3]);
	cout<<determinan;
	cout<<endl;
	
	cout<<"invers matriks"<<endl;
	kofaktor[1][1]=(matriks[2][2]*matriks[3][3])-(matriks[3][2]*matriks[2][3]);
	kofaktor[1][2]=((matriks[2][1]*matriks[3][3])-(matriks[3][1]*matriks[2][3]))*-1;
	kofaktor[1][3]=(matriks[2][1]*matriks[3][2])-(matriks[3][1]*matriks[2][2]);
	kofaktor[2][1]=((matriks[1][2]*matriks[3][3])-(matriks[3][2]*matriks[1][3]))*-1;
	kofaktor[2][2]=(matriks[1][1]*matriks[3][3])-(matriks[3][1]*matriks[1][3]);
	kofaktor[2][3]=((matriks[1][1]*matriks[3][2])-(matriks[3][1]*matriks[1][2]))*-1;
	kofaktor[3][1]=(matriks[1][2]*matriks[2][3])-(matriks[2][2]*matriks[1][3]);
	kofaktor[3][2]=((matriks[1][1]*matriks[2][3])-(matriks[2][1]*matriks[1][3]))*-1;
	kofaktor[3][3]=(matriks[1][1]*matriks[2][2])-(matriks[2][1]*matriks[1][2]);
	
	for(int baris=1;baris<=a;baris++){
		for(int kolom=1;kolom<=a;kolom++){
			adjoin[baris][kolom]=kofaktor[kolom][baris];
		}
	}
	
	for(int baris=1;baris<=a;baris++){
		for(int kolom=1;kolom<=a;kolom++){
			invers[baris][kolom]=(1/determinan)*adjoin[baris][kolom];
			cout<<invers[baris][kolom]<<"\t";
		}
		cout<<endl;
	}
}