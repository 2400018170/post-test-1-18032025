#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;

struct Pemilik{
    string nama;
    long long int wa;
    int nomeja;
};

void inputPemilik(Pemilik &pemilik){
    cout<<"Masukkan Nama:"; getline(cin,pemilik.nama);
	cout<<"Masukkan No Whatssap:"; cin>>pemilik.wa;
	cout<<"Masukkan No Meja:"; cin>>pemilik.nomeja;
}

void displayPemilik(const Pemilik &pemilik){
    cout<<"\n==================== Pemilik Pesanan ====================\n";
	cout<<left<<setw(20)<<"Nama" << ":"<<pemilik.nama<<endl;
	cout<<left<<setw(20)<<"No Whatssap" << ":"<<pemilik.wa<<endl;
	cout<<left<<setw(20)<<"No Meja" << ":"<<pemilik.nomeja<<endl;
    cout<<"\n========================================================\n";
    system("pause");
    system("cls");

    double makan=0, diskon, total, harga_setelah_diskon, diskon1 = 0.10;
    int pilih;
    int hargamakanan[2]={17000,21000};
    int jumlahdinein=0, jumlahsnack=0, jumlahminuman=0 ;

    cout<<"==========================================================================="<<endl;
	cout<<"                            SELAMAT DATANG                                 "<<endl;
	cout<<"                             DI KEDAI VINA                                 "<<endl;
	cout<<"==========================================================================="<<endl;
	cout<<endl;
	cout<<"                            [1] Dine In                                    "<<endl;
	cout<<"                            [2] Exit                                       "<<endl;
	cout<<endl;
	cout<<"==========================================================================="<<endl;
	cout<<"Masukkan pilihan anda : "; cin>>pilih;

    if(pilih==1){
        int pilihdinein;
        cout<<"                                Dine In                                    "<<endl;
        cout<<"==========================================================================="<<endl;
        cout<<"        1. Ayam Goreng-----------------------------------Rp 17.000         "<<endl;
        cout<<"        2. Ayam Bakar------------------------------------Rp 21.000         "<<endl;
        cout<<"==========================================================================="<<endl;
        cout<<"Pilihan anda : ";cin>>pilihdinein;
        cout<<"Jumlah : ";cin>>jumlahdinein;
        system("pause");
        system("cls");
        
        string dinein;
        if (pilihdinein < 1 || pilihdinein > 2) {
            cout << "Menu tidak tersedia\n";
        }
        switch (pilihdinein) {
            case 1: dinein = "Ayam Goreng" ; break;
            case 2: dinein = "Ayam Bakar" ; break;
        }
        
        makan = jumlahdinein * hargamakanan[pilihdinein-1];

        if (makan > 45000) {
            diskon = makan * diskon1;
            harga_setelah_diskon = makan - diskon;
        } else {
            harga_setelah_diskon = makan; 
        }
        
        cout<<"==========================================================================="<<endl;
        cout<<"                              KEDAI VINA                                   "<<endl;
        cout<<"==========================================================================="<<endl;
	    cout<<left<<setw(20)<<"Nama" << ":"<<pemilik.nama<<endl;
	    cout<<left<<setw(20)<<"No Whatssap" << ":"<<pemilik.wa<<endl;
	    cout<<left<<setw(20)<<"No Meja" << ":"<<pemilik.nomeja<<endl;
        cout<<"==========================================================================="<<endl;
        cout<<endl;
        cout<<"Makanan : " << dinein << "  x  " <<jumlahdinein<<endl;
        cout<<endl;
        cout<<"==========================================================================="<<endl;
        cout<<"Total Makanan : Rp " << makan << endl;
        
        if (diskon > 0) {
        cout <<"Diskon (10%) : Rp " << diskon << endl;
    	}
    	
        cout<<"==========================================================================="<<endl;
        cout<<"Total Bayar   : Rp " << harga_setelah_diskon << endl;
        cout<<"==========================================================================="<<endl;
        cout<<"                      TERIMAKASIH TELAH BERKUNJUNG                         "<<endl;
        cout<<"                             DI KEDAI VINA                                 "<<endl;
        cout<<"==========================================================================="<<endl;
    }
    else if (pilih==2){
        cout<<"========================================================\n";
        cout<<"              TERIMAKASIH TELAH BERKUNJUNG              \n";
        cout<<"========================================================\n";
    } 
    
}

int main(){
    Pemilik pemilik;
	
	cout<<"Input Data Pemesan\n";
	inputPemilik(pemilik);
	
	displayPemilik(pemilik);
	
	return 0;
}
