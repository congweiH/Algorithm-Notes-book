
// 连续自然数求和  要求用for语句实现

#include <iostream>
using namespace std;
    
int main(){

    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
    }

    cout << sum <<endl;

    return 0;
}