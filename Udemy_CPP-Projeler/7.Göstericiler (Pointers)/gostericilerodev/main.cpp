#include <iostream>
using namespace std;

    int f (int *a, int boyut) {
        
        int eb= a[0]; //eb ve ek değerlerini ilk olarak 0.eleman olarak atıyoruz.
        int ek=a[0];
        
        for (int i=0; i< boyut; i++) {
            //daha sonra eb ve ek değerlerini güncelleyebilmek için karşılaştırıyoruz
            
            if (eb<a[i]) {
                eb=a[i];
                }
            if (ek>a[i]) {
                ek=a[i];
                }
            }
        return eb-ek;
        }

     int main() {
     cout << "gostericiler - odev" << endl;
      
     int a[9] = {1,2,8,45,6,-2,7,52,1};
     cout << "eb-ek farki:" << f(a,9) << endl;
    
}
