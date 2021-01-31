/*
从键盘上输入3个字符串，求出其中最大者。
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    cout << max(max(a, b), c) << endl;


    return 0;
}