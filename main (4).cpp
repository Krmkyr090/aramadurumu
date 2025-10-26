/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class CepTelefonu {
public:
    char model[30];
    float fiyat;
    bool aramaDurumu;
    CepTelefonu(){
        aramaDurumu = false;
        cout<<"--> bir telefonu nesnesi oluturuldu (yapıcı metot kullanıldı)."<<endl;
        cout<<"  arama durumu başlangıcta: " << aramaDurumu << endl;
    }
    ~CepTelefonu(){
        cout<<"--> bir telefonu nesnesi yok edildi (yıkıcı metot kullanıldı)."<<endl;
        cout<<" gule gule " << model << "!"<< endl;
    }
    void aramabaslat(string m) {
        aramaDurumu = true;
        string modelstr(model);
        cout<<modelstr<<" ile "<<m<<" aramaya baslandi..."<<endl;
    }
};
int main()
{   
    cout<<"### main basladı###"<<endl;
    CepTelefonu benimtelefonum;
    strcpy(benimtelefonum.model, "samsung s23");
    benimtelefonum.fiyat = 40000.0;
    benimtelefonum.aramabaslat("ANAM");
    cout<<"telefonun fiyatı:  "<<benimtelefonum.fiyat<<endl;
    cout<<"### main kapanıyor ###"<<endl;
 
    return 0;
}