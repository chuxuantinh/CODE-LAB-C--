#include <math.h>
#include <iostream>
using namespace std;


double ox, oy, R;
double oA, oB;
double d;

double tinh_khoang_cach_2_diem(double x, double y)
{

    double kc;
    // tam thoi chua lam kieu nay
}

int main()
{
    cout<<"Nhap toa do diem O ban dau " ; cin>> ox; cin>>oy;
    cout<<"Nhap R:"; cin>>R;
    if (R<0) 
    {
        cout<<"Ban dang nhap so ban kinh la so am"; 
        return 0;
    }

    cout<<"Nhap toa do diem A" ; cin>> oA; cin>>oB;
    d= sqrt(pow((oA-ox),2) + pow((oB-ox),2));
    cout<<"Khoang cach tu A den O la:" <<d;
    if(d<=R) 
    {
        cout<<" Diem nam trong";
    }
    else
    {
        cout<<" Diem nam ngoai";
    }
    
    




}
