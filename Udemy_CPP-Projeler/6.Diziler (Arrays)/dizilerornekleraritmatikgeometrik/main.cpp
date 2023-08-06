#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "diziler - ornekler" << endl;
    
    //aritmetik ortalama 
    /*
    int a[8] ={3,5,21,12,6,4,13,1};
    int toplam=0;
    for (int i=0; i<8;i++) 
        {
            toplam= toplam + a[i]; //toplam değerinin hesaplanması için       
        }
    cout << "aritmetik ortalamasi:" << (float) toplam/8 << endl; //bölme işlemi olduğu için kalanlı çıkablir 
    //bu yüzden float değişken tipini kullanıyoruz.
    */
    
    //geometrik ortalama
    /*
    int a[8] ={3,5,21,12,6,4,13,1};
    int carpim=1;
    
    for (int i=0;i<8;i++) {
        carpim *= a[i]; //değerlerin çarpılması
        }
        cout << "geometrik ortalamasi:" << pow(carpim,(float) 1/8) << endl;
        //1/8 değeri 8.dereceden kök almamızı belirtir. 1/x dedikten sonra kaçıncı dereceden kökünü almak istersek x yerine onu yazmamız gerekmektedir.
        */
        
    //dizideki tek sayıların ortalaması
    /*
     int a[8] ={3,5,21,12,6,4,13,1};
     int toplam=0;
     int teksayilar=0; //kaç tane tek sayi oladuğunu bilmediğimiz için bir paramtre değeri atadık
      for (int i=0;i<8;i++) {
          if(a[i]%2==1) {
              toplam += a[i];
              teksayilar++;
              }
      }
    cout << "dizideki tek sayilarin ortalamasi:" << (float)toplam/teksayilar << endl; */
    
    //eb ve ek sayılarının ortalaması
    
    int a[8] ={3,5,21,12,6,2,13,1};
    
    int eb= a[0]; 
    int ek = a[0];
    
    for (int i=0; i<8; i++) {
        
        if(a[i]%2==0) { //eğer sayı çift ise (ilk kural)
            
            if(eb< a[i]) { //en büyük çift sayiyi belirlemek için
                
                eb= a[i];
                }
            if (ek> a[i]) {
                
                ek= a[i];
                }
        }
        
        }
        cout << "eb ve ek sayilarin ortalmasi:" << (float)(eb+ek)/2 << endl;
}

