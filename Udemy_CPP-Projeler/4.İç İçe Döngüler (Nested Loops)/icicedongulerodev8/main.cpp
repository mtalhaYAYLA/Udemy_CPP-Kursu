#include <iostream>
using namespace std;

int main()
{
    cout << "ic ice donguler - odevler" << endl;
    
    int b;
    cout << "lutfen boyutunu giriniz!" << endl;
    
    cin >> b;
    
    for (int i=0; i<b;i++) { //satırlar için
        
        for (int k=0;k<b; k++) { //sütunlar için
            if (i+k>=b-1) // sadece ters köşegen için i+k==b-1
                cout << "1  ";
                else
            cout << "0  "; //her satırda b tane 0 olacak 
            }
            
            cout << endl;
            //ve her satır bittiğininde bir aşağı satıra geçicek
        }
    
     return 0;
}
