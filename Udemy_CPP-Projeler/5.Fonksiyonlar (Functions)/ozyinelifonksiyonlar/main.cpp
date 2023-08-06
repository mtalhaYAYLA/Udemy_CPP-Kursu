#include <iostream>
using namespace std;

int faktoriyel (int x) 

{
    if (x == 1)
        return 1;
    return x * faktoriyel(x-1);
}


int main()
{
    cout << "ozyineli fonksiyonlar" << endl;
    
    cout << faktoriyel(5) << endl;
}
