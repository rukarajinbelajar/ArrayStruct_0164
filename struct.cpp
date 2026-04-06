#include<iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
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
}