#include <iostream>
using namespace std;
int main()
{
    cout << "Dik ucgen kontrolu" << endl;
    
    int a,b,c; // c yi hipotenüs olarak düşünelim bağıntıyı kullanırken
    
    cout << "ucgenin kenarlarini giriniz:" << endl;
    cin >> a;
    cin >> b;
    cin >> c; 
    
    if (a*a + b*b == c*c) {
        cout << "dik ucgendir" << endl;
        }
        
        /* eğer kullanıcı yanlışlıkla hipotenüsü en son girmez ise 
         * diyerek bir mekanizma geliştirmek için
         * if kodunda yazdığımız kodu, diğer 
         * olabilecek ihtimaller içinde şu şekilde geliştirebiliriz:
         * (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
*/        
    else {
        cout << "dik ucgen degildir" << endl;
        }
    
    return 0;
}
