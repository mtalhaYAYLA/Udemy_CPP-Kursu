#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int boyut (char *s) {
    
    int b=0;
    char c= s[0];
    while(c!='\0') { //end of string gelene kadar kodumuz çalışacak
        
        c=s[++b]; // döngü her çalıştığında s'in değeri bir artmış olacak
        
        }
    return b;
    }

int main()
{
    cout << "string fonksiyonu yazmak" << endl;

    char *s="yazilim"; //immutable
    cout << s << endl;
    
    char c[8]="yazilim";
    
    cout << c << endl;
    cout << s << endl;
    cout << boyut(c) << endl;
    cout << boyut(s) << endl;
    
    cout << strlen(c) << endl; //boyutu bastırma ile aynı görevi yapmaktadır
    
    char *x = (char *)malloc(sizeof(char)*8); //boyutunu belirledik
    strcpy(x,s); // deep copy - s değişkenini x'e kopyalama işlemini yapar
    
    cout << x << endl;
}
