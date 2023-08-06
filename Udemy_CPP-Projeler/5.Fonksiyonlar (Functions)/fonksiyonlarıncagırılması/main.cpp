#include <iostream>
using namespace std;
    
int f (int x)
        {
        cout << x << endl; 
        return 5; //her fonksiyon çağırıldığında 5 değeride basılacaktır
        }

void g (int x)
    {
    cout << x + 5 << endl; 
    }
    
int main()
{
    cout << "fonksiyonlar (functions)" << endl;
    
   cout << f(5) << endl; //ilk fonksiyonumuzu çağırıyoruz
   cout << f(16) << endl; //ikinci fonksiyonu çağırıyoruz
   g(10);
}