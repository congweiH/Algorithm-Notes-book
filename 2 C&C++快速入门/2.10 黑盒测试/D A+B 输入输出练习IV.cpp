/*
你的任务是计算若干整数的和。
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        int a;
        int sum = 0;
        while(n--){
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }

    return 0;
}