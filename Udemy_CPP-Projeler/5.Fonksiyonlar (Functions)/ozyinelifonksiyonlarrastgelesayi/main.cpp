#include <iostream>
#include <ctime>
#include <stdlib.h> 
using namespace std;
int main()
{
    cout << "oz yineli fonksiyonlar - rastgele sayi atama" << endl;
    
    int rg; //rastgele=rg
    srand (time(NULL));
    rg= rand() %6 +1; // zar örneği
    //1 ve 6 arasındaki sayılardan seçim
    cout << rg << endl;

    rg= rand() %2; // yazı - tura örneği için
    //0 ve 1 arasından döndürülecektir.
    cout << rg << endl;

    rg=rand() %100;
    cout << rg << endl;
}
