#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Diem{
    double x,y;

} diem;


void Nhaptoado(diem &N, char name)
{
    cout<<"Nhap toa do %c";cin>>name;
    cout<<"Nhap toa do x:"; cin>>&N.x;
    cout<<"Nhap toa do y:"; cin>>&N.y;
}

double Tinh_Khoang_Cach(diem X, diem Y)
{
    double kc;
    kc = sqrt(pow((X.x-Y.x),2)+ pow((X.y-Y.y),2));
    return kc;
}

int main()
{

    diem A, B;
    Nhaptoado(A,'A');
    Nhaptoado(B,'B');
    cout<<"Khoang cach la:" <<Tinh_Khoang_Cach(A,B);
    return 0;
}