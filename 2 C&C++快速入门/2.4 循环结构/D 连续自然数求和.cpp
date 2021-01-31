
// 连续自然数求和 要求在程序中使用break语句。

#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    int n;
    cin >> n;
    int i = 1;
    while(1){
        sum += i;
        i++;
        if(i>n)
            break;
    }
    cout << sum << endl;

    return 0;
}