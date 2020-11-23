#include <iostream>
#include <math.h>

using namespace std;


void In_binh_phuong()
{
    int n = 4;
    while (n <=100)
    {
        cout<<"In lan " << n <<","<< pow(n,2);
        n++;
    }
}

//In ra n con số, mỗi con số trên 1 hàng ( 1+1, 1+2, 1+2+3)

void In_Xuong_Hang()
{
    int n,tong =0;
    cout<<"Nhap vao so n:" ; cin>>n;
    for(int i =0; i<=n; i++)
    {
        tong = tong + i;
        cout<<tong<<endl;
    }
    


}

int main()

{
    //In_binh_phuong();
    In_Xuong_Hang();
}