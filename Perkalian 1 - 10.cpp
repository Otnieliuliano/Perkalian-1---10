#include <iostream>
using namespace std;
int main(){

    int i,n,batas=10,jumlah;

    cout<<"MENAMPILKAN BILANGAN PERKALIAN"<<endl;
    cout<<"======================================"<<endl;
    cout<<"Angka yang akan dikalikan : ";
    cin>>n;
    cout<<"======================================"<<endl;
    cout<<"Menampilkan Hasil Perkalian :"<<endl;

    for(i=0;i<=batas;i++)
    {jumlah=i*n;
    cout<<i<<"*"<<n<<"="<<jumlah<<endl;
    }
    return 0;
}
