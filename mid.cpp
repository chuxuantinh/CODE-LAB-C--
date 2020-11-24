#include <math.h>
#include <iostream>
 using namespace std;

void Swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b =tmp;
    
}

int main()
{
    int a = 5, b =7;
    cout<<"TRUOC DOI"<< a << b;
    Swap(&a,&b);
    cout<<"SAU DOI"<< a << b;
    return 0;
}



/*

Yêu cầu:

–  Khai báo 2 biến được gán giá trị ban đầu.

– Viết hàm đổi chỗ giá trị của 2 biến cho nhau


Giải thuật:

– Ta viết hàm với tham số truyền vào là 2 biến được khai báo. Như các bạn đã biết, nếu truyền tham trị, sẽ không thể thay đổi giá trị của chúng được. Muốn thay đổi được giá trị của 2 biến truyền vào, chúng ta cần truyền tham biến (con trỏ + tham chiếu).

*/