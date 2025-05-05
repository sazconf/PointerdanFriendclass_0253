#include<iostream>

using namespace std;

class mahasiswa
{
    public:
        int nim;
        void showNim(){
            cout<< "No Induk = " << nim << endl;
        }
};

int main(){
    mahasiswa mhs; //object mhs
    mhs.nim= 2024;
    mhs.showNim(); //Number Access Operator

    mahasiswa &refMhs = mhs; //Pointer reference refMhs
    refMhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer Dereference pMhs
    pMhs ->nim = 3;
    pMhs -> showNim();
    return 0;
}