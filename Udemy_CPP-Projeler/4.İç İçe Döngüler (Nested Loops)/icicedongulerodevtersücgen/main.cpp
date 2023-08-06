#include <iostream>
using namespace std;
int main()
{
    cout << "ic ice donguler odevler" << endl;
    // dik üçgen ve ters dik üçgen yazılması
    
    /*
     * 
     * *
     * * *
     * * * *
     * * * * * şeklinde bir dik üçgen isteniyor.
     */
    int n;
    cout << "lutfen boyut belirten bir sayi giriniz" << endl;
    cin>>n;
    for (int i=0;i<n;i++)
        {
            for (int j=0; j<n-(i+1);j++) 
                {
                cout << " ";
                }
            for (int j=0;j<i+1;j++)
                {
                 cout << "*";
                }
            cout << endl;
        }
    // ters dik üçgenin ekrana bastırılması
    /*
          *
        * *
      * * *
    * * * *
  * * * * * şeklinde bir üçgen istenmektedir. */
  
  
    return 0;
}
