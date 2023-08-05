#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler" << endl;
    
    //100'den 0'a 13'e tam bölünebilen sayılar örneği
    
    //ilk gösterim yolu
    
    for (int a=100; a>0; a--) {
        
        if (a%13==0) 
             cout << a << endl;
        }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    //ikinci gösterim yolu
    
    for (int b=91; b>0; b-=13) /* b-=13 anlamı b= b-13 tür. yani her atanan değerden 13 çıkarılacaktır.
     * ve ilk sayıyı 13 ün katı olan 91 olarak atadığımız için
     * her 13 eksilttiğimizde, oluşan sayı yine 13 ün katı olacaktır.
    */
        {
             cout << b << endl;
        }
        
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
    // üçüncü gösterim yolu
    
    //aynı kodların while döngüsü ile yazılmış hali
    
    int d=100;
     while (d>0) {
         d--;
         if(d%13==0) {
             
             cout << d << endl;
             }
         
         }
    return 0;
}
