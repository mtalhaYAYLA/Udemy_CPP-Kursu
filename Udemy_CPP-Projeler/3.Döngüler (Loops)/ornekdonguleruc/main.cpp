#include <iostream>
using namespace std;
int main()
{
    cout << "Donguler - Ornekler" << endl;
         
          /*Aşağıdaki kodları yazarken artık 
          * döngülerin yapısını bildiğimiz ve bunları kullanabileceğimiz için 5 defa 
          * ”cin >>” ile kullanıcıdan sayı istemek yerine aşağıdaki kısayola başvuruyoruz:
          * Bir döngü içerisine herhangi bir değer atıyoruz (int a=0) ve bu değerin
          * 5 kere tekrarlanabileceğini a<5 diyerek belirtiyoruz. */
          
          
         int toplam=0; /* toplamın ilk değeri 0'dır. eğer döngünün içinde tanımlansaydı,
         döngü her başladığında değeri tekrar sıfır olurdu ve toplam değerine ulaşılamazdı. */
         for (int a=0; a< 5 ; a++) 
             { 
             int okunandeger;
             cout << "lutfen bir sayi giriniz" << endl;
             cin >> okunandeger;
             toplam += okunandeger; 
             /* diğer bir gösterimi= 
              * toplam + okunandeger =(yeni)toplam 
              * yani böylece her yeni okunan değer
              * o toplama eklenecek ta ki
              * 5 sayı girilene kadar*/
             }
             cout << "ortalamasi:" << toplam/5 << endl;
    
    return 0;
}
