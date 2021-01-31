/*
题目描述
写一个函数，将一个字符串中的元音字母复制到另一个字符串中。
在主函数中输入一个字符串，通过调用该函数，得到一个有该字符串中的元音字母组成的一个字符串，并输出。

*/
#include <iostream>
using namespace std;

string fun(string a){
    string b = "";
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            b += a[i];
        }
    }
    return b;
}

int main(){
    string a;
    cin >> a;
    cout << fun(a) << endl;

    return 0;
}