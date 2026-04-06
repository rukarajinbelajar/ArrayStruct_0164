#include<iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    string umur;
};

int main(){
    Orang mhs;
    cout <<"Nama : ";
    cin>>mhs.nama;
    cout <<"Alamat : ";
    cin>>mhs.alamat;
    cout <<"Umur : ";
    cin>>mhs.umur;
    cout<<endl;

    //tampilkan
    cout<<" Nama : "<<mhs.nama <<endl;
    cout<<" Alamat : "<<mhs.alamat <<endl;
    cout<<" Umur : "<<mhs.umur <<endl;
}