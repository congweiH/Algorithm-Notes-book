
/*

输入一个正整数n，求Fibonacci数列的第n个数

*/

#include <iostream>
using namespace std;

int f[100];

int main(){

    f[1] = 1;
    f[2] = 1;

    int n;
    cin >> n; 

    for(int i=3;i<=n;i++){
        f[i] = f[i-1] + f[i-2];
    }

    cout << f[n] << endl;


    return 0;  
}