#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
struct pus
{
    int no,edit;
    string nama,alamat,keluh,poli;
    int hapus,umur;
}puskes[100];
int i,a,j;
void data_pas(pus){
    int pilih=0,y=1;
    do{
        cout<<"---------------------------"<<endl;
        cout<<"Data Pasien"<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Lihat Data"<<endl;
        cout<<"3. Hapus Data"<<endl;
        cout<<"0. keluar"<<endl;
        cout<<"Pilih Menu = ";cin>>pilih;
        cout<<"---------------------------"<<endl;
switch(pilih){
case 1:{if(y==10){cout<<"Masih Kosong"<<endl;}else{
        cout<<"Nama     =   ";cin>>puskes[a].nama;
        cout<<"Usia     =   ";cin>>puskes[a].umur;
        cout<<"Alamat   =   ";cin>>puskes[a].alamat;
        cout<<"Keluhan  =   ";cin>>puskes[a].keluh;
        cout<<"Poli     =   ";cin>>puskes[a].poli;};};break;
case 2:{if(y==10){cout<<"Salah"<<endl;}else{{
        cout<<"\n================================Menampilkan Data===============================\n\n";
        cout<<"==================================================================================================\n";
        cout<<"||\tNo\t||\tNama\t||\tUsia\t\t||\tAlamat\t||\tKeluhan\t||\tPoli\t\t||\n";
        cout<<"=================================================================================================\n";
        j=j+1;
        cout<<"||\t"<<j<<"\t||";
        cout<<"\t"<<puskes[i].nama<<"\t||";
        cout<<"\t"<<puskes[i].umur<<" tahun\t||";
        cout<<"\t"<<puskes[i].alamat<<"\t||";
        cout<<"\t"<<puskes[i].keluh<<"\t||";
        cout<<"\t"<<puskes[i].poli<<"\t||";cout<<endl;
        ;};break;}}
case 3:{if(y==10){cout<<"Salah"<<endl;}else{
        cout<<" Pilih No  = ";cin>>puskes[100].hapus;
        if(puskes[100].hapus==puskes[i].no){cout<<"Data Telah Dihapus"<<endl;}
        else if(puskes[100].hapus!=puskes[i].no){cout<<"Data Tidak Ada"<<endl;}
    ;}break;}
    case 0:cout<<"---------------Keluar Menu";;break;
    default : cout<<"Masukan Salah"<<endl;
}}
while(pilih!=0);
}
void data_poli(pus){
cout<<"===========Data POLI==========="<<endl;
int pilih=4,y=1;
do{
cout<<"1. Daftar Poli"<<endl;
cout<<"2. Lihat Data Pasien"<<endl;
cout<<"3. Edit Data Pasien"<<endl;
cout<<"4. keluar"<<endl;
cout<<"Pilih Menu =";cin>>pilih;
cout<<"---------------------------------------------"<<endl;
switch(pilih){
case 1:{if(y==10){cout<<"Masih Kosong"<<endl;}else{
    cout<<"||----------------------------||"<<endl;
        cout<<"1. Spesialis Anak"<<endl;
        cout<<"2. Spesialis Gigi"<<endl;
        cout<<"3. Spesialis Saraf"<<endl;
        cout<<"4. T.H.T"<<endl;
        cout<<"5. Spesialis Kandungan"<<endl;
        cout<<"6. Spesialis Tulang"<<endl;
        cout<<"7. Spesialis Penyakit Dalam"<<endl;
        cout<<"8. Umum"<<endl;
    cout<<"||----------------------------||"<<endl;
};break;}
case 2:{if(y==10){cout<<"Salah"<<endl;}else{
        cout<<"\n================================Menampilkan Data======================================\n\n";
        cout<<"===========================================================================================\n";
        cout<<"||\tNo\t||\tNama\t||\tUsia\t\t||\tAlamat\t||\tKeluhan\t||\tPoli\t\t||\n";
        cout<<"===========================================================================================\n";
        cout<<"||\t"<<puskes[i].no<<"\t||";
        cout<<"\t"<<puskes[i].nama<<"\t||";
        cout<<"\t"<<puskes[i].umur<<" tahun\t||";
        cout<<"\t"<<puskes[i].alamat<<"\t||";
        cout<<"\t"<<puskes[i].keluh<<"\t||";
        cout<<"\t"<<puskes[i].poli<<"\t||";cout<<endl;
;};break;}
case 3:{if(y==10){cout<<"Salah"<<endl;}else{puskes[100].edit;};break;}
case 4: cout<<"----------Program Dihentikan---------"<<endl;;break;
default : cout<<"Tidak Valid"<<endl;
}}
while(pilih!=0);

}

void pendaftaran(pus){
cout<<"--Menu Belum Tersedia--"<<endl;
}
int main(){
int pilih=0,y=1;
do{
cout<<"---------------------------------------------"<<endl;
cout<<"Aplikasi Puskesmas"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"1. Data Pasien"<<endl;
cout<<"2. Data Poli"<<endl;
cout<<"3. Pendaftaran"<<endl;
cout<<"0. keluar"<<endl;
cout<<"Pilih Menu =";cin>>pilih;
cout<<"---------------------------------------------"<<endl;
switch(pilih){
    case 1:{if(y==10){cout<<"Masih Kosong"<<endl;}else{data_pas(puskes[i]);};break;}
    case 2:{if(y==10){cout<<"Salah"<<endl;}else{data_poli(puskes[100]);};break;}
    case 3:{if(y==10){cout<<"Salah"<<endl;}else{pendaftaran(puskes[100]);};break;}
    case 0: cout<<"++++++++++Program Selesai++++++++++";break;
    default : cout<<"Tidak Valid"<<endl;
}}
while(pilih!=0);

getch();
}

