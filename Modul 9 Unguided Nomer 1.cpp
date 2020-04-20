#include <iostream>

using namespace std;

int main()
{
    cout << "============================" << endl;
    cout << "   PENCARIAN DATA BILANGAN     " << endl;
    cout << "============================\n" << endl;

int n, bilangan_dicari, Data[10];
int a;
bool ketemu = true;

    cout << "Masukkan data bilangan: ";
    cin >> n;
    for(int c=0; c<n; c++)
    {
        cout <<"Masukkan bilangan ke-" <<c<<" = ";
        cin >> Data[c];
    }
    a=0;
    cout <<"\nInput data bilangan yang anda cari : ";
    cin >> bilangan_dicari;
    ketemu=0;

    while((a<10)&&(ketemu==0))
    {
        if(Data[a]== bilangan_dicari)
        {
        ketemu=1;
        cout <<"\nBilangan "<< bilangan_dicari<<" Ditemukan pada posisi ke "<<a;
        }
        else
        a=a+1;
    }
    if(ketemu)
    cout<<"\n\nData bilangan yang anda cari ada"<<endl;
    else
    cout<<"\n\nMaaf data bilangan yang yang anda cari tidak ada"<<endl;
}
