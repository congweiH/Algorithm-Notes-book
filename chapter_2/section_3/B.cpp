
//题意：比较交换实数值

#include <iostream>
using namespace std;


int main(){

    double a, b;

    cin >> a >> b;

    if(a > b)
        swap(a,b);

    printf("%.2lf %.2lf\n", a, b);

    return 0;
}