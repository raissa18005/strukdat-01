/*
Nama Program      :Strukdat 1
Nama              :Raissa Amini
NPM               :140810180073
Tanggal Buat      :26 februari 2019
Deskripsi Program :konversi suhu

*****************************************/

#include <iostream>

using namespace std;

float konversiFahrenheit(int temp){
    return temp*9/5+32;
}

int main()
{
    int celcius;
    cout << "KONVERSI CELCIUS KE FAHRENHEIT"<<endl;
    cout << "Celcius    = ";
    cin >> celcius;
    cout << "Fahrenheit = " << konversiFahrenheit(celcius);
    return 0;
}
