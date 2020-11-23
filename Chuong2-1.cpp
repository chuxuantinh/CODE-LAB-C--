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
int main()

{
    In_binh_phuong();
}