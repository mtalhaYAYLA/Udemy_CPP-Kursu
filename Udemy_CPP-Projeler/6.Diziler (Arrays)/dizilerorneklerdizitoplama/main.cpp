#include <iostream>
using namespace std;


int main()
{
    cout << "diziler - ornekler" << endl;
    
    /*cout << "lutfen kac sayi gireceginizi belirtiniz:" << endl;
    int c;
    cin >> c;
    
    int toplam=0;
    cout << "lutfen sayilari giriniz:" << endl;
    
    for (int i=0; i < c; i++) {
        
        int g; // girilecek olan sayilar
        cin >> g;
        toplam += g; //girilen sayilari bir degerin içerisinde topluyoruz
        }
    cout << "sayilarin toplami:" << toplam << endl; */
    
    //ikinci çözüm yolumuz - dizileri kullanarak
    
     cout << "lutfen kac sayi gireceginizi belirtiniz:" << endl;
    
    int n;
    cin >> n;
    int a[n]; //kullancının kaç sayı gireceğini alıyoruz
    
    cout << "lutfen sayilari giriniz:" << endl;
    
    for (int i=0;i<n;i++) {
        
        cin >> a[i]; //girilecek olan sayıları alıyoruz
    }
    
    int toplama=0;
    for (int i=0;i<n;i++) {
        
        toplama += a[i]; //bu sayıları topluyoruz
        
        }
     cout << "sayilarin toplami:" << toplama << endl; //ekrana bastırıyoruz
    
    
    return 0;
}
