#include<iostream>
using namespace std;

int main(){
    int aku [5] = {10,20,30,40,50}; //deklarasi dengan inisialisasi
    int kamu[5]; //deklarasi tanpa inisialisasi

    cout<<"Data pada Index 1 = "<<aku[1]<<endl; //tampilkan data

    //mengubah array/index
    aku[1] = 200;
    cout<<"Data pada Index 1 = "<<aku[1]<<endl;
    cout<<"Data Index 1 = "<<aku[1]<<endl;
    cout<<"data index 0 =";
    cin>>kamu[0];
    cout<<"data index 1 =";
    cin>>kamu[1];
    cout<<"data index 2 =";
    cin>>kamu[2];
    cout<<"data index 3 =";
    cin>>kamu[3];
    cout<<"data index 4 =";
    cin>>kamu[4];
    cout<<endl;

    //menampilkan satu persatu
    cout << "Data pertama = " << kamu[0] << endl;
    cout << "Data kedua = " << kamu[1] << endl;
    cout << "Data ketiga = " << kamu[2] << endl;
    cout << "Data keempat = " << kamu[3] << endl;
    cout << "Data kelima = " << kamu[4] << endl;

    //mengisi dengan menggunakan perulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout
    }
    
}