/*
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置（最后M个数循环移至最前面的M个位置）。
如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。

输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

输入样例:
6 2
1 2 3 4 5 6
输出样例:
5 6 1 2 3 4
*/

#include <iostream>
using namespace std;

int a[200];

int main(){

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    if(n > m){
        m = m% n ;
    }

    while(m--){
        int t = a[n];
        for(int i = n; i >= 2; i--){
            a[i] = a[i-1];
        }
        a[1] = t;
    }
    for(int i = 1; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << a[n] << endl;
    return 0;
}