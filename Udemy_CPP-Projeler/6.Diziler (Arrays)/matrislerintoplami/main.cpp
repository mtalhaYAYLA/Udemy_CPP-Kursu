#include <iostream>
using namespace std;

int main()
{
    cout << "matrislerin toplami" << endl;
    
    int a[2][3]= {0,1,2,9,8,7};
    int b[2][3]= {6,5,4,3,4,5};
    int c[2][3]; // toplamını yapması için
    
    for (int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            
            c[i][j]= a[i][j] + b[i][j]; // a[i][j] += b[i][j]
        }
        }
    
     for (int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            
            cout << "  " << c[i][j];
        }
        cout << endl;
        }
   
    return 0;
}
