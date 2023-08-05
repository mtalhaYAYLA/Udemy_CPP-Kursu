#include <iostream>
using namespace std;
int main()
{
    cout << "3 sayidan en buyugu ve kucugu" << endl;
    
    int x,y,z;
    
    cout << "birinci sayiyi giriniz." << endl;
    cin >> x;
    
    cout << "ikinci sayiyi giriniz." << endl;
    cin >> y;
    
    cout << "ucuncu sayiyi giriniz." << endl;
    cin >> z;
    
    //birinci gösterim tarzı
    /*
    if (x>y && x>z ) {
    cout << "en buyuk sayi:" << x;
    
        if (y>z) {
        cout << "en kucuk sayi" << z;
     }
        else {
        cout << "en kucuk sayi:"<< y;
            }
    }
    if (y>x && y>z) {
        cout << "en buyuk sayi:" << y;
    
        if (x>z) {
        cout << "en kucuk sayi:" << z;
        }
        else {
        cout << "en kucuk sayi:" << x;
            }
    }
    if (z>x && z>y) {
        cout << "en buyuk sayi:" << z;
    
        if (x>y) {
        cout << "en kucuk sayi:" << y;
        }    
        else {
        cout << "en kucuk sayi:" << x;
            }
    }
   // ikinci gösterim tarzı 
    int enbuyuk = x;
    
    if (y > enbuyuk) {
        enbuyuk=y;
        }
    if (z > enbuyuk) {
        enbuyuk=z;
        }  
    int enkucuk = x;
    
    if (y < enkucuk) {
        enkucuk=y;
        }
    if (z < enkucuk) {
        enkucuk=z;
        }
        cout << "en buyuk sayi:" << enbuyuk;
        cout << "en kucuk sayi:" << enkucuk;
    */
        //üçüncü gösterim tarzı
        
        int enbuyuk = x;
        
        if (x>y && x>z) {
        enbuyuk= x;    
            }
        else if (y>x && y>z) {
        enbuyuk= y;
            }
            else {
                enbuyuk=z;
                }
        cout << "en buyuk sayi:" << enbuyuk;
                
        int enkucuk = x;
        
        if (x<y && x<z) {
        enkucuk= x;    
            }
        else if (y<x && y<z) {
        enkucuk= y;
            }
            else {
                enkucuk=z;
                }
        cout << "en kucuk sayi:" << enkucuk;
        
    return 0;
}
