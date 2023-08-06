#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "dizgi kavrami ve karakter dizileri" << endl;
    
    char *b= "yazilim";
    cout << b << endl;
    cout << b[2] << endl; // 2.harfin basılmasını istiyoruz
    
    char a[8]= "yazilim" ;
    cout << a << endl;
    
    char x[5];
    x[0]='y'; 
    //eğer "y" yazsaydık iki karakter gibi düşünecekti: y ve /0 
    x[1]='a';
    x[2]='z';
    cout << x << endl;
    
}
