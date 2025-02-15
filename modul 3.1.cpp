#include<iostream>
using namespace std;

int main(){
	int a,x;
	int matriks1[a][a];
	int matriks2[a][a];
	cout<<"ukuran matriks a*a : ";cin>>a;
	//matriks1
	cout<<"masukan nilai matriks1"<<endl;
	for(int baris1=0;baris1<a;baris1++)
	{
		for(int kolom1=0;kolom1<a;kolom1++)
		{
			cout<<"isi baris "<<baris1<<" kolom "<<kolom1<<" : ";cin>>matriks1[baris1][kolom1];
		}
		cout<<endl;
	}
	//matriks2
	cout<<"masukan nilai matriks2"<<endl;
	for(int baris2=0;baris2<a;baris2++)
	{
		for(int kolom2=0;kolom2<a;kolom2++)
		{
			cout<<"isi baris "<<baris2<<" kolom "<<kolom2<<" : ";cin>>matriks2[baris2][kolom2];
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	//inputan matriks1
	cout<<"hasil matriks1"<<endl;
	for(int baris1=0;baris1<a;baris1++){
		for(int kolom1=0;kolom1<a;kolom1++){
			cout<<matriks1[baris1][kolom1]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//inputan matriks2
	cout<<"hasil matriks2"<<endl;
	for(int baris2=0;baris2<a;baris2++){
		for(int kolom2=0;kolom2<a;kolom2++){
			cout<<matriks2[baris2][kolom2]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//urut matriks1
	cout<<"urut matriks 1"<<endl;
	for(int baris1=0;baris1<a;baris1++){
		for(int kolom1=0;kolom1<a;kolom1++){
			for(int i=0;i<a;i++){
				for(int j=0;j<a;j++){
					if(matriks1[baris1][kolom1]<matriks1[i][j]){
						x=matriks1[baris1][kolom1];
						matriks1[baris1][kolom1]=matriks1[i][j];
						matriks1[i][j]=x;
					}
				}
			}
		}
	}
	
	for(int baris1=0;baris1<a;baris1++){
		for(int kolom1=0;kolom1<a;kolom1++){
			cout<<matriks1[baris1][kolom1]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//urut matriks2
	cout<<"urut matriks 2"<<endl;
	for(int baris2=0;baris2<a;baris2++){
		for(int kolom2=0;kolom2<a;kolom2++){
			for(int k=0;k<a;k++){
				for(int l=0;l<a;l++){
					if(matriks2[baris2][kolom2]<matriks2[k][l]){
						x=matriks2[baris2][kolom2];
						matriks2[baris2][kolom2]=matriks2[k][l];
						matriks2[k][l]=x;
					}
				}
			}
		}
	}
	
	for(int baris2=0;baris2<a;baris2++){
		for(int kolom2=0;kolom2<a;kolom2++){
			cout<<matriks2[baris2][kolom2]<<"\t";
		}
		cout<<endl;
	}	
	cout<<endl;
	
	//perkalian
	cout<<"perkaliannya adalah"<<endl;
	int matrikskali[a][a];
	for(int y=0;y<a;y++){
		for(int z=0;z<a;z++){
			matrikskali[y][z]=0;
			for(int h=0;h<a;h++){
				matrikskali[y][z]+=matriks1[y][h]*matriks2[h][z];
			}
		}
	}
	
	for(int t=0;t<a;t++){
		for(int u=0;u<a;u++){
			cout<<matrikskali[t][u]<<"\t";
		}
		cout<<endl;
	}
}