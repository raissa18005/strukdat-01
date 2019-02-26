/*
Nama Program      :Strukdat 1
Nama              :Raissa Amini
NPM               :140810180073
Tanggal Buat      :26 februari 2019
Deskripsi Program :fizz buzz

*****************************************/

#include <iostream>

using namespace std;

void fizzbuzz(){                    //looping fizzbuzz
    for(int i=1;i<=100;i++){
        if(i%15==0){
            cout << "fizzbuzz"<<endl;
        }else if(i%5==0){
            cout << "buzz"<<endl;   //kalo dibagi 5
        }else if(i%3==0){                 //kalo dibagi 3
            cout << "fizz"<<endl;    //kalo dibagi 3 dan 5
        }else cout<<i<<endl;
    }
}

int main()
{
    fizzbuzz();
    return 0;
}
