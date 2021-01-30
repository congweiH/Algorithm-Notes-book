


// 题意：比较交换3个实数值，并按序输出

#include <iostream>
using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;

    if(a > b)
        swap(a, b);
    
    if(a > c)
        swap(a, c);

    if(b > c)
        swap(b, c);

    printf("%.2lf %.2lf %.2lf\n", a, b, c);

    return 0;
}