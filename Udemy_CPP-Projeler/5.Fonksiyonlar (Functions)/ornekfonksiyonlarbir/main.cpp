#include <iostream>
using namespace std;

// fonksiyonlar - örnekler 1

int faktoriyel (int x) 
    {
    int carpim =1; //faktöriyel açılımı 1'e kadar gittiği için
    // 0 olsaydı tüm çarpım işlemleri sıfırlanırdı 
    for (int i=x; i>0;i--)
        {
        carpim*=i; //carpim = carpim * i
        }
    return carpim;
    
    }

int kombinasyon (int n, int r) //Fonksiyon kümelerine istedğimiz kadar parametre atayabilmekteyiz
    {
       return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n-r)); 
    }

int main()
{
    cout << "fonksiyonlar ornekler" << endl;
    
    cout << faktoriyel(3) << endl;
    cout << faktoriyel(6) << endl;
    
    cout << kombinasyon(5,2) << endl;
    //atamış olduğumuz parametre sayısı kadar değer vermek zorundayız
    
}
