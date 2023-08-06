#include <iostream>
using namespace std;


int main()
{
    cout << "diziler - ornekler" << endl;
    
    cout << "lutfen 5 sayi giriniz!!" << endl;
    int a[5];
    
    for (int i=0; i<5; i++) {
        
    cin >> a[i]; //kulanıcıdan 5 değer alıyoruz
    }
    
    int eb= a[0];
    int ek= a[0];
    /* ilk olarak en büyük ve en küçük değerleri
     * dizinin ilk elemanlarını atıyoruz
     * daha sonra diğer elemanlar ile karşılaştırarak
     * bu değerlerden daha büyükleri varsa
     * güncelleştirmesini sağlayacağız.
     * */
    int toplam=a[0]; 
    
    for (int i=1; i<5; i++) {
        toplam += a[i]; //değerleri topluyoruz
        
        if (eb<a[i]) {
        eb= a[i]; } //eb değerini güncellemek için
        if (ek>a[i]){
            ek= a[i]; }
            //ek değerini güncellemek için
        
        }
    cout << "en buyuk deger:" << toplam - ek << endl;
    cout << "en kucuk deger:" << toplam - eb << endl;
    
}
