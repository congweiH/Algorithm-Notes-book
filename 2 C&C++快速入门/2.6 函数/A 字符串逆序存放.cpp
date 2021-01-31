/*
题目描述
写一个函数将一个字符串按反序存放。在主函数中输入一个字符串，通过调用该函数，得到该字符串按反序存放后的字符串，并输出。
*/

#include <iostream>
using namespace std;


string fun(string a){
    string b = "";

    for(int i = a.size()-1;i>=0;i--){
        b += a[i];
    }
    return b;
}

int main(){

    string a;
    cin >> a;
    cout << fun(a) << endl;

    return 0;
}