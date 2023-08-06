#include <iostream>
using namespace std;
int main()

{
    cout << "ic ice donguler ornekler" << endl;
    
    
    for (int i=1; i<=4;i++) 
    /*bizim çarpım tablomuz 1'den başaladığı için 
     * değeri 1'e atayarak başladık ve ayrıca 
     * değerin 4'e <= olmasının sebebi yine çarpım tablomuzun 
     * 4'ler kısmında bitiyor olmasıdır. */
        {

        for (int a=1;a<=4;a++)
            {
            
            cout << i*a << " , " ; 
    // yan yana yazılmaları için endl koymuyoruz, eğer koyarsak satır aşağı kısıma geçer
            
            }
            cout << endl;
        } 
        
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    // boyutu kullanıcıdan alınan örnek
    int boyut;
    cout << "lutfen bir sayi giriniz.." <<endl;
    cin >> boyut;
    for (int b=1; b<=boyut; b++) {
        
        for (int c=1; c<=boyut;c++) {
            
            cout << b*c << " , " ;
            
            }
        cout << endl;
        }
    
    return 0;
}
