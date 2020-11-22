#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#define A 0.5556
//#define B 32
//#define F 200
float f =200;
float b =10 ; 

// chu ý C++ chữ hoa và thường là giống nhau

int main()
{
    //float f;
    cout << "Nhap f" ;cin>>f;
    //cout<< "Nhiet do F la" << F << endl;
    //cout<< "Nhiet do C: la" << A*(F-B)  <<endl;
    cout<<"nhap b;"; cin>>b;
    //cout<<"nhiet do c:" << A*(f-B) << endl;
    cout<<"nhiet do nhap tu ban phim:" << A*(f-b);
    system("pause");
    return 0;

}