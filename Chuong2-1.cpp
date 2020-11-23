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

//In ra n con số, mỗi con số trên 1 hàng ( 1+1, 1+2, 1+2+3) //slide 66 chuong 1

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


void In_Xuong_Hang2()
{
    int n;
    cout<<"Nhap vao so n:" ; cin>>n;
    for(int i =0; i<=n; i++)
    {
        int tong =0; // chu tong phai de o day, neu o global =>> ket qua khac ?
        for (int j =1; j<=i; j++)
        {
            tong = tong + j;
        }
        cout<<tong<<endl;
    }
}

//chuong 5
void Test_While()
{
    int i=0, n=10 ; // khoi dong tri cho i -> moi in
    //cout << "Nhap vao so lan in:" ;cin>>i;
    while (i<=10)
    {
        cout<<"Hello!"<<endl;
        i++;
    }
}

// Tinh tong, trung binh cua n so nhap tu ban phim;

// In 10 chu hello xuong hang

void In_Hello()
{
    int i =1; 
    for (i =1; i<=100; i++)
    {
        cout<<"Hello";
        if (i%10 ==0)
        {
            cout<<endl;
        }
        
    }
}

int main()

{
    //In_binh_phuong();
    //In_Xuong_Hang();
    In_Xuong_Hang2();
    printf("Ho Chi Minh city University of Technology\n"); 
    printf("Programming Fundamentals");
    printf("\"Hello\nWorld!\"" );
    Test_While();
    In_Hello();



}