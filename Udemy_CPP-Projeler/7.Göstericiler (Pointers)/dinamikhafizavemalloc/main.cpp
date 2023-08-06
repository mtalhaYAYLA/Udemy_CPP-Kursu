#include <iostream>
#include <stdlib.h>
using namespace std;


int f (int *p) {
        *p=10;
}

int main()
{
    cout << "dinamik hafiza yontemi - malloc" << endl;
    
    int *p= (int*)malloc(sizeof(int)*3);
    p[2]=3;
    cout << p[2] << endl;
    
    int *q= (int*)malloc(sizeof(int)*3);
    *q= 50;
    f(q);
    
    cout << *q << endl;
    
}
