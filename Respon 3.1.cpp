#include <iostream>
using namespace std;

int main() {
  int jumlah_mahasiswa;
  float nilai[jumlah_mahasiswa];
  string nama[jumlah_mahasiswa];
  

  // Input jumlah mahasiswa
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> jumlah_mahasiswa;
  
  cout<<endl;

  // Input nilai-nilai mahasiswa
  for (int i = 0; i < jumlah_mahasiswa; i++) {
  	cout << "Masukkan nama mahasiswa " << i+1 << ": ";
    cin >> nama[i];
    cout << "Masukkan nilai mahasiswa " << nama[i] << ": ";
    cin >> nilai[i];
  }
  
  cout<<endl;
  string tempnama;
  float tempnilai;
  // Urutkan nilai
  for (int i = 0; i < jumlah_mahasiswa-1; i++) {
    for (int j = i+1; j < jumlah_mahasiswa; j++) {
      if (nilai[i] < nilai[j]) {
      	tempnama = nama[i];
        tempnilai = nilai[i];
        
        nama[i]=nama[j];
        nilai[i] = nilai[j];
        
        nama[j]=tempnama;
        nilai[j] = tempnilai;
      }
      else if(nilai[i]==nilai[j]){
      		if (nama[i] > nama[j]) {
      		tempnama = nama[i];
        	tempnilai = nilai[i];
        
        	nama[i]=nama[j];
        	nilai[i] = nilai[j];
        
        	nama[j]=tempnama;
        	nilai[j] = tempnilai;
      	}
	  }
    }
  }

  // Output nilai setelah diurutkan
  cout << "Ranking mahasiswa setelah diurutkan:\n";
  for (int i = 0; i < jumlah_mahasiswa; i++) {
    cout << "Peringkat "<<i+1<<" => "<<nama[i]<<" dengan "<<nilai[i]<<endl;
  }
  
  cout << endl;
  
  // Hitung rata-rata nilai
  float total = 0;
  for (int i = 0; i < jumlah_mahasiswa; i++) {
    total += nilai[i];
  }
  float rata_rata = total / jumlah_mahasiswa;

  // Output rata-rata nilai
  cout << "Rata-rata nilai adalah " << rata_rata << endl;
  
  cout<<endl;
  
  // Cari nilai tertentu
  string target;
  bool ditemukan = false;
  cout << "Masukkan nama yang dicari: ";
  cin >> target;
  for (int i = 0; i < jumlah_mahasiswa; i++) {
    if (nama[i]==target) {
      cout << target << " ditemukan\n";
      cout << "Nilai " << nilai[i] << " ditemukan\n";
      ditemukan = true;
      break;
    }
  }
  if (!ditemukan) {
    cout << target << " tidak ditemukan\n";
  }

  return 0;
}