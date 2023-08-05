#include <iostream>
using namespace std;
int main()

{
    cout << "Mantiksal islemler " << endl;
    
    int b,r ;
    
    cout << "birinci sayiyi giriniz." << endl;
    cin >> b;
    cout << "ikinci sayiyi giriniz." << endl;
    cin >> r;
    
    if (b == r) {
        cout << "sayilar biribirine esittir." << endl;
        }
        
        else {
        cout << "sayilar birbirine esit degildir." << endl;
            }
            
    if (b != r) {
        cout << "sayilar birbirinden farklidir." << endl;
        }
        
    else {
        cout << "sayilar birbirinden farkli degildir." << endl;
        }
        
    if (b > r) {
        cout << "birinci sayi ikinci sayidan buyuktur." << endl;
        }    
        
    else {
        cout << "birinci sayi ikinci sayidan buyuk degildir." << endl;
        }
        
    if (b < r) {
        cout << "birinci sayi ikinci sayidan kucuktur." << endl;
        }    
    
    else {
        cout << "birinci sayi ikinci sayidan kucuk degildir." << endl;
        }
    
     if (b >= r) {
         cout << "birinci sayi ikinci sayiya buyuk eşittir." << endl;
         }    
         
     else {
         cout << "birinci sayi ikinci sayiya buyuk esit degildir." << endl;
         }
         
     if (b <= r) {
         cout << "birinci sayi ikinci sayiya kucuk esittir." << endl;
         }
    
    else {
         cout << "birinci sayi ikinci sayiya kucuk esit degildir." << endl;
        }
        
    return 0;
}
