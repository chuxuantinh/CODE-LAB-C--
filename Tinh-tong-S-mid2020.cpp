#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double S = 1; int i,n;
    cout<<"Nhap n:"; cin>> n;
    if (n<=1)
    {
        S = 1;
        cout<<"Giá trị S=:" << S;

    }
    else
    {
        for (i=1; i<=n; i++)
        S = S + pow(-1, i)/i*(i+1);
        cout<<"Giá trị S=:"<<S;
    }
    //cout<<S;
    
    
}