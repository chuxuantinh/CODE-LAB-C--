#include <math.h>
#include <iostream>
using namespace std;


float find_max(float a[], int n)
{
    float ln= a[0];
    for(int i=1; i<n; i++)
    {
        if (a[i] >ln)
        {
            ln = a[i];
        }
    }
    return ln;
    
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
    //Tìm gia trị lon nhat trong mang so thuc
    //find_max(a[i], n);
    float ln= a[0];
    for(int i=0; i<=n; i++)
    {
        if (a[i] >ln)
        {
            ln = a[i];
        }
    }
    cout<< "So lon nhat:"<<ln;

    // In Gia tri Trung bình

    float sum =0;
    for (int i=0; i<=n;i++)
    {
        sum =sum + a[i];
    }
    cout<<"Tong:"<< sum;
    cout<<"Trung binh là"<< sum/n;



    
}