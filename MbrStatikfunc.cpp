#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
     static int nim;
public:
     int id;
     string nama;

     void setID();
     void printAll();

     static void setNim(int pNim){nim=pNim; /*Definisi Function*/}
     static int getnim(){return nim; /*Defiinisi Function*/}

     mahasiswa(string pnama):nama(pnama){setID();}
};

int mahasiswa::nim=0;

void mahasiswa::setID(){
    id = ++nim;
}

void mahasiswa::printAll(){
    cout<<"ID   = "<<id<<endl;
    cout<<"Nama = "<<nama<<endl;
    cout<<endl;
}

int main(){
    mahasiswa mhs1("Sri Dadi");
    mahasiswa mhs2("Budi jatimko");
    mahasiswa::setNim(9); //mengfakses nim melalui static member function "setnim"
    mahasiswa mhs3("Andi Janu");
    mahasiswa mhs4("Joko Wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout<< "akses dari lluar objecct = "<<mahasiswa::getnim<<endl;

    return 0;
}