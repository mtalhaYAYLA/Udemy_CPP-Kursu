#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler - Ornekler" << endl;

    /* //ikinci örnek
    for (int a=50; a < 70; a++) {
        
        if (a%2==0) {
            
            cout << a << " , " ;
            
            }
        }
          
         //üçüncü örnek
    for (int d=100; d>70; d--) {
        
        if (d%7==0) {
            
            cout << d << " , " ;
            
            }
        }
    */
     
     // dördüncü örnek
     
     //ve için yazılan kod (yani hem 3'e hemde 7'ye bölünebilen sayılar)
     
     for (int f=1; f< 100; f++) {
         
         if (f%3==0 && f%7==0) {
             
             cout << f << " , " ;
             
            }
         }
         cout << endl;
         cout << endl;
         cout << endl;
         cout << endl;// 4 satır boşluk bırakarak diğer kodu çalıştıracak
         
     //veya için yazılan kod (yani ya 3'e ya da 7'ye bölünebilen sayılar)
      
    for (int f=1; f< 100; f++) {
        
        if (f%3==0 || f%7==0) {
            
            cout << f << " , " ;
            
            }
    }

    return 0;
}
