#include <iostream>
using namespace std;

int main()
{
    cout << "diziler" << endl;
    
    int a[3]={3,7,2};

    cout << a[1] << endl; 
    //1.elemanını yani 2'yi bastırmasını istiyoruz.

    cout << a[0] + a[2] << endl; 
    //değişkenlerde olduğu gibi toplayabiliyoruz.
    //0. ve 2. elemanını toplamasını istedik.
    
    a[2]=8; //değerini güncelledik ve tekrar bastırılmasını istiyoruz. 
    cout << a[2] << endl;
    
    
    for (int i=0;i<3;i++) 
        {
        cout << a[i] << endl;
        }
    
}
