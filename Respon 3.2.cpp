#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string suhu_input;
    double suhu, suhu_output;
    char satuan_suhu;

    cout << "Masukkan suhu (contoh: 100 F atau 40 C): ";
    getline(cin, suhu_input);

    int pos = suhu_input.find(" ");
    string suhu_str = suhu_input.substr(0, pos);
    suhu = stod(suhu_str);

    satuan_suhu = suhu_input[pos+1];

    if(satuan_suhu == 'F' || satuan_suhu == 'f')
    {
        suhu_output = (suhu - 32) * 5/9;
        cout << suhu << " F = " << suhu_output << " C" << endl;
    }
    else if(satuan_suhu == 'C' || satuan_suhu == 'c')
    {
        suhu_output = (suhu * 9/5) + 32;
        cout << suhu << " C = " << suhu_output << " F" << endl;
    }
    else
    {
        cout << "Input tidak valid!" << endl;
    }

    return 0;
}