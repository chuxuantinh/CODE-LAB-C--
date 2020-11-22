#include <iostream>

struct toado{
    double x,y,z;

} diem;


void Nhaptoado(diem N)
{
    cout<<"Nhap toa do %c";cin>>N;
    cout<<"Nhap toa do x:"; cin>>N.x;
    cout<<"Nhao toa do y:"; cin>>N.y;
}

double Tinh_Khoang_Cach(diem X, diem Y)
{
    double kc;
    kc = sqrt(pow((X.x-Y.x),2)+ pow((X.y-Y.y),2));
    return kc;
}

int main()
{


    
}