#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
     cout << "gosterici airtmetigi - kullanicidan sayi okuma" << endl;
     /*1.çözüm yolu
     int a,b,c,d,e;
     cout << "lutfen 5 sayi giriniz!" << endl;
     cin >> a >> b >> c >> d >> e ;
     cout << a <<" " << b <<" "<< c <<" "<< d << " "<< e << endl;
     
      */
      
     /*2.çözüm yolu (diziler ile)
     
     int a[5];
     cout << " lutfen 5 sayi giriniz!" << endl;
     for (int i=0; i<5;i++) {
         cin >> a[i];
         }
     for (int i=0; i<5;i++) {
        cout << a[i] <<" " ;
         }
          */
          
    /*3.çözüm yolu (dinamik hafıza ile)
    cout << " lutfen 5 sayi giriniz!" << endl;
    int *q;
    q=(int*) malloc(sizeof (int)*5);
    
     for (int i=0; i<5;i++) {
         cin >> q[i];
         }
     for (int i=0; i<5;i++) {
        cout << q[i] <<" " ;
         }
          */
     // 4.çözüm yolu (gösterici aritmetiği ile)
     cout << " lutfen 5 sayi giriniz!" << endl;
     int *q;
     q=(int*) malloc(sizeof (int)*5);
     
     for (int i=0; i<5;i++) {
         cin >> *(q+i);
         }
     for (int i=0; i<5;i++) {
        cout << *(q+i) <<" " ;
         }
     
}
