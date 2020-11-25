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

float Day_Binh_Phuong(float a[], int n)
{
    for(int i =0; i<=n; i++)
    {
        a[i] = pow(i,2);
    }


}

// Kiem tra so nguyen to va in tich cua cac so nguyen to < n
//Check so nguyen to
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
    cout<<"Trung binh là"<< sum/n << endl;
    // In day con tang dan
    
    for (int i=0; i<=n;i++)
    {
        cout<< a[i]; cout<<",";
        if (a[i] > a[i+1])
        {
            cout<< endl;
        }
    }

    //Tim min
    for( int i =1 ; i<=n; i++)
    {
        int nn = a[0];
        if (a[i]< nn)
        {
            nn = a[i];
        }
        cout<<"Nho nhat:"<<nn;
    }

    // Swicth case
    int c1;
    cout<<"Nhap c1:" ;cin>>c1;
    //int th1;
    switch(c1)
    {
    case 0:
        cout<<"TH0:";
        break;
    case 10:
        cout <<"TH10";
        break;
    }

    /*
    // In mang nguoc lai;
    for (int i = n; i>=0 ; i++)
    {
        cout<< a[i];
    }
    */


  


    
}