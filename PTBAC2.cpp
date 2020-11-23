/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Hello World";
    float   a, b, c, delta, x1, x2;

    printf("Nhap he so a, b, c: \n");
    //scanf("%f %f %f: ", &a, &b, &c);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = b*b - 4*a*c;
    if(delta == 0) {
        x1 = -b/(2*a);
        x2 = -b/(2*a);
        printf("Phuong trinh co nghiem kep x = %f", x1);
    }

    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem x1 = %f, x2 = %f", x1, x2);
    }

    if(delta < 0)
        printf("Phuong trinh vo nghiem");


    return 0;
}
