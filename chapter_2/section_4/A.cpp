//连续自然数求和  要求用while语句实现

#include <iostream>
using namespace std;


int main(){

    int sum = 0;
    int i = 1;
    while(i<=100){
        sum += i;
        i++;
    }
    cout << sum << endl;

    return 0;
}