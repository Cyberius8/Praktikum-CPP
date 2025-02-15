#include <iostream>
#include <string>
using namespace std;
int main(){
    int universe, orang;
    char huruf;
    string nama[universe][orang], simpan;
    cout<<"Masukkan Jumlah Universe : ";cin>>universe;
    cout<<"Masukkan Jumlah Orang : ";cin>>orang;
    cout<<"Masukkan Huruf : ";cin>>huruf;
    
    //input nama
    for (int i=0;i<universe;i++) 
    {
        cout<<"\nUniverse "<<i+1<<endl;
        for (int j=0;j<orang;j++){

            cout<<"Orang ke-"<<j+1<<" : ";
            if (j==0&&i==0)
            {
                getline(cin,nama[i][j]);
            }
            getline(cin,nama[i][j]);
        }
    }

    for (int i=0;i<universe;i++) 
    {
        cout<<"\nUniverse "<<i+1<<endl;
        
        for (int j=0;j<orang;j++)
        {
            int size;
            size=nama[i][j].length();
            for (int k=0;k<size;k++)
            {
                (nama[i][j])[k];
                if (((nama[i][j])[k])==huruf||((nama[i][j])[k])==huruf+32||((nama[i][j])[k])==huruf-32)
                {
                    (nama[i][j])[k]=0;
                }
            }
        }
        
        for (int n=0;n<orang;n++)
        { 
            int k=n+1;
            if (k<orang&&nama[i][n]==nama[i][k])
            {
                int length;
                length=nama[i][k].length();
                for (int y=0;y<length;y++)
                {
                    (nama[i][k])[y]=127;
                }     
                simpan=nama[i][k];                           
            }
            if (n<(orang-1)&&nama[i][orang-1]==nama[i][n])
            {
                int length;
                length=nama[i][orang-1].length();
                for (int y=0;y<length;y++)
                {
                    (nama[i][orang-1])[y]=127;
                }
                simpan=nama[i][orang-1];
            }
        }
        
        for (int m=0;m<orang;m++)
        {
            if ((nama[i][m])[0]!=127)
            {
                cout<<nama[i][m]<<endl;
            }
        }
    }
}