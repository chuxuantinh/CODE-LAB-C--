#include <iostream>
#include <math.h>


using namespace std;



float GiaiThua(int n)
{
    if(n==1)
        return 1;
    return GiaiThua(n-1)*n;
}

float Tinh(int x, int n)
{
    if(n == 1)
        return 1;
    return Tinh(x,n-1) + pow((-1),n)*((pow(x,n)/GiaiThua(n)));
}


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
    

    cout<<"Ket qua "<<Tinh(1,2) <<endl;
    return 0;
    
}