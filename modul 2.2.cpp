#include<iostream>
using namespace std;

int main()
{
	int x,y,n;
	bool prima=true;
	cout<<"Welcome"<<endl;
	cout<<"nilai akhir     : ";cin>>x;
	cout<<"selisih         : ";cin>>y;
	cout<<"banyak bilangan : ";cin>>n;
	cout<<endl;
	
	//rumus aritmatika
	int step_1=n-1;
	int b=-y;
	int step_2=step_1*b;
	int awal=x-step_2;
	
	//aritmatika
	cout<<"A. Bilangan Aritmatika"<<endl;
	cout<<"Seluruh Bilangan Aritmatika       : ";
	int jumlaha=0;
	for(int a=awal;a>=x;a-=y)
	{
		cout<<a<<" ";
		jumlaha+=a;
	}
	cout<<endl;
	cout<<"Total Seluruh Bilangan Aritmatika : "<<jumlaha<<endl<<endl;
	
	//prima
	int jumlahp=0;
	cout<<"B. Bilangan Prima"<<endl;
	cout<<"Seluruh Bilangan Prima            : ";
	for(int p=awal;p>=x;p-=y)
	{
		int bil=0;
		for(int c=1;c<=p;c++)
		{
			if(p%c==0)
			{
				bil+=1;
			}
		}
		if(bil==2)
		{
			cout<<p<<" ";
			jumlahp+=p;
		}
	}
	cout<<endl;
	cout<<"Total Seluruh Bilangan Prima      : "<<jumlahp<<endl<<endl;
	
	//fibonaci
	int jumlahf=0;
	cout<<"C. Bilangan Fibonacci"<<endl;
	cout<<"Seluruh Bilangan Fibonacci        : ";
	for(int f=awal;f>=x;f-=y)
	{
		int fa=0;
		int fb=1;
		int fc=1;
		for(int fd=0;fd<=f;fd++)
		{
			int fc=fa+fb;
			fa=fb;
			fb=fc;
			if(fc==f)
			{
				cout<<fc<<" ";
				jumlahf+=fc;
				if(fc==1)
				{
					cout<<fc;
					jumlahf+=fc;
				}
			}
		}
	}
	cout<<endl;
	cout<<"Total Seluruh Bilangan Fibonacci  : "<<jumlahf;
}