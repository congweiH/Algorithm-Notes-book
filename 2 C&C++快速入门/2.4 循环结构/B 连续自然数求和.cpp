
// 连续自然数求和   要求用do...while语句实现

#include <iostream>
using namespace std;


int main(){

    int sum = 0;
    int i = 1;
    do{
        sum += i;
        i++;
    }while(i<=100);

    cout << sum << endl;

    return 0;
}
