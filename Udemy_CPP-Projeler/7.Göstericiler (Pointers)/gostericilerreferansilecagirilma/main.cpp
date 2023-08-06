#include <iostream>
using namespace std;

// değer ile çağırma
int g (int x) {
   x=10;
    }

//referans ile cagirma
int k (int *x) {
    *x=30;
    }

int main()
{
    cout << "gostericilerin fonksiyonlar ile kullanilmasi" << endl;
    
    int a=20;
    int *p;
    p=&a;
    
    //deger ile cagirma
    g(a);
    cout << a << endl;
    //referans ile cagirma
    k(p);
    cout << a << endl;
}
