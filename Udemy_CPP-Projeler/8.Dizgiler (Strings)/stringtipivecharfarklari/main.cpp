#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    cout << "string tipi" << endl;
    
    string s; //string gelişmiş bir değişken tipidir
    char *p= "yazilim";
    char c[8]= "yazilim";
    s = p; //string tipinde tanımlanan bir değişken, bir işaretçiye eşitlenebiliyor
    
    /*string tipi kullanıldığı zaman 
     * "s. " diyerek string'in herhangi bir 
     * özelliğini çağırabilmeniz mümkündür
     */
    
    cout << s.size() << endl; //boyutunu çağırdık
    
    s.append("deneme") ; // string ile değerin yanına, bir mesaj eklemeniz mümkündür
    cout << s << endl;
    
    cout << s.substr(2,8) << endl; //metinin belirttiğiniz elemanlarından keserek, ekrana yazdırır
    
 
    return 0;
}
