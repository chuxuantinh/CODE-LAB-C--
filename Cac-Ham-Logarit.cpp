#include <math.h>
#include <iostream>

using namespace std;


double Tinh_Log_Thuong(double x)
{
    double kq;
    cout<<"Nhap gia tri can tính log" ; cin>>x;
    kq = log(x);
    cout<< "Ket qua la:" << kq;
    return kq;
}


// Tinh e mũ x //double exp(double x) 

double Tinh_Emu(double x)
{   
    double kq;
    cout<<"Nhap gia tri: x"; cin>>x;
    kq = exp(x);
    cout<<"Ket qua la:" <<kq;
    return kq;
    
}
int main()

{
    double x, kq;
    cout<<"Nhap gia tri can tính log" ; cin>>x;
    kq = log(x);
    cout<< "Ket qua la:" << kq;
    Tinh_Log_Thuong(x);
    Tinh_Emu(x);

}