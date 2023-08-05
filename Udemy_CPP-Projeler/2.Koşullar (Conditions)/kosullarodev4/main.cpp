#include <iostream>
using namespace std;
int main()
{
    cout << "sayi araliği" << endl;
     /*“Klavyeden 3 sayı alarak mantık bağlaçları ile karşılaştıran kod örneğini yazınız.” 
     Örneğin; klavyede yazılan sayılar a, b ve c olsun. 
     Aşağıdaki durumların karşılaştırılması baz alınarak kodlar yazılmalı:
     a’nın b ve c arasında olup olmadığı
     a’nın b’ye eşit ve aynı zamanda c’den küçük olup olmadığı
     a’nın b’den veya c’den küçük olup olmadığı
     3 sayının birbirine eşit olup olmadığı
*/

    int a,b,c;
    
    cout << "birinci sayiyi giriniz." <<endl;
    cin >> a;
    cout << "ikinci sayiyi giriniz." <<endl;
    cin >> b;
    cout << "ucuncu sayiyi giriniz." <<endl;
    cin >> c;
    
    if (a>b && c>a || a<b && a>c) /* b -- a -- c || c -- a -- b (a'nın b ve c'nin arasında
olma ihtimalleri*/
        {
            cout << "a sayisi b ve c arasindadir." <<endl;
        }
    else{
            cout << "a sayisi b ve c arasinda degildir." <<endl;
        }
    if (a == b && c>a) 
        {
            cout << "a sayisi b'ye esittir ve c'den kucuktur." <<endl;
        }
    else {
            cout << "a sayisi b'ye esit degildir veya c'den kucuk degildir." <<endl;
        }
    if (b>a || c>a) 
        {
            cout << "a sayisi b'den veya c'den kucuktur." <<endl;
        }
    else {
            cout << "a sayisi b'den ve c'den kucuk degildir." <<endl;
        }    
    if (a == b && a == c) // eğer a b'ye ve c'ye eşit ise zaten b'de c'ye eşittir.
        {
            cout << "3 sayi birbirine esittir." <<endl;
        }
    else {
            cout << "3 sayi birbirine esit degildir." <<endl;
        }    
    
    return 0;
}
