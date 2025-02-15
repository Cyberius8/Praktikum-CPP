#include<iostream>
using namespace std;

int main2(){
	int input;
	cout<<"masukan input : ";cin>>input;
	for(int i=0;i<input;i++)
	{
		for(int j=i;j>0;j--)
		{
			cout<<j<<" ";
		}
		cout<<"0";
		for(int k=1;k<input-i;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int input;
	cout<<"masukan input : ";cin>>input;
	for(int i=0;i<input;i++)
	{
		for(int j=i;j>0;j--)
		{
			cout<<j<<" ";
		}
		for(int k=0;k<input-i;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
}