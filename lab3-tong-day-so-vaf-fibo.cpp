#include <math.h>
#include <iostream>
using namespace std;


int fibonaci_t(int n)
{
    if (n<1)
    {
        return n;
    }
    else
    {
        return fibonaci_t(n-1) + fibonaci_t(n-2);
    }
    
}

int main()
{
    int n;
    cout<<"Nhap vao so :"; cin>>n;
    int tong= 0;

    for(int i =1; i<=n; i=i+2)
    {
        tong = tong + i*i;
    }
    cout<< "Tong binh phuong cac  so le la:" << tong <<endl;
    int m = 1;
    cout<<fibonaci_t(m);
}