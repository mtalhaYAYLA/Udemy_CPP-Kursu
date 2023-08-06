#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Dizgilerin karsilastirilmasi-Sig Kopyalama-Bus Error 10" << endl;
    
    char *b= "yazilim";
    cout << b << endl;
    
    char a[8]= "yazilim" ;
    cout << a << endl;
    b=a;
    b[2]='x';
    cout << a << endl;
    
    if(strcmp(b,a)==0) {
        cout << "esittirler" << endl;
        }
    else {
        cout << " esit degillerdir" << endl;
        }
}
