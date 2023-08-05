#include <iostream>
using namespace std;
int main()

{
    // IF VE ELSE YAPILARI
    cout << "if - else - else if yapiari" << endl;
    int a;
    cout << "LUtfen notunuzu giriniz:" << endl;
    cin >> a; // KULLANICININ NOTU GİRMESİ İÇİN
    
    if ( a >= 90){
        
        cout << "A aldiniz.." <<endl;
        
        }
        else if ( a >= 70 ){
            
            cout << "B aldiniz.." << endl;
            
            }
            else if (a >= 50){
                
                cout << "C aldiniz.." << endl;
                
                }
        else {
            
            cout << "F aldiniz ve kaldiniz.." << endl;
        }
            
               return 0;
}
