/*
你的任务是计算若干整数的和。
*/

#include <iostream>
using namespace std;


int main(){
    int n;
    while (cin >> n){
        int a, sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }
    

    return 0;
}