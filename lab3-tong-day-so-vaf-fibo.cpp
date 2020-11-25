#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Nhap vao so :"; cin>>n;
    int tong= 0;

    for(int i =1; i<=n; i=i+2)
    {
        tong = tong + i*i;
    }
    cout<< "Tong binh phuong cac  so le la:" << tong;
}