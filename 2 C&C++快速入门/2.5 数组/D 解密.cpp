
/*
有一行电文，已按如下规律译成密码：

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。要求根据密码译回原文，并输出。
*/

#include <iostream>
using namespace std;


int main(){

    string mi;

    cin >> mi;

    for(int i = 0; i < mi.size();i++){
        if('a'<=mi[i] && mi[i]<='z'){
            cout << (char)('z' - mi[i] + 'a');
        }else if('A'<=mi[i] && mi[i] <= 'Z'){
            cout << (char)('Z' - mi[i] + 'A');
        } else{ // 不是字母 原样输出
            cout << mi[i];
        }
    }
    cout << endl;

    return 0;
}