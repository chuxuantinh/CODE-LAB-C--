
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    //loop from 2 to n/2 to check
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n,x;
    float a[1000];
    cout<<"Nhap vao so n:"; cin>> n;
    for(int i=0;i<=n;i++)
    {
        cout<<"Nhap phan tu thu:" <<i;
        cin>>a[i];
        
    }
    //xuat
    cout<<"Cac phan tu sau nhap";
    for(int i=0;i<=n;i++)
    {
        cout<< a[i]; cout<<",";
    }

    cout<<"Cac phan tu sau nhap - In nguoc";
    for(int i=n;i>=0;i--)
    {
        cout<< a[i]; cout<<",";
    }

    //check snt
    float tich = 1;
    for(int i=0;i<=n;i++)
    {
        
        if (isPrime(a[i]) == true)
        {
            tich *= a[i];
        }
    }
    cout<<"Tich cac snt"<< tich;
    // case nay dang tinh 2 la snt;
}