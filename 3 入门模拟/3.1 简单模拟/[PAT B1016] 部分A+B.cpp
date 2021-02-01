/*
正整数 A 的“DA（为 1 位整数）部分”定义为由 A 中所有 DA组成的新整数 PA​​ 。
例如：给定 A=3862767，DA​​ =6，则 A 的“6 部分”PA是 66，因为 A 中有 2 个 6。

现给定 A、DA 、B、DB​​ ，请编写程序计算 PA + PB 。

输入格式：
输入在一行中依次给出 A、D
​A​​ 、B、DB ，中间以空格分隔，其中 0<A,B<10^10。

输出格式：
在一行中输出 PA +PB  的值。

输入样例 1：
3862767 6 13530293 3
输出样例 1：
399
输入样例 2：
3862767 1 13530293 8
输出样例 2：
0
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int fun(string a){
    if(a == "") return 0;
    return stoi(a);
}


int main(){
    string a, b, pa = "", pb = "";
    char da, db;
    cin >> a >> da >> b >> db;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == da){
            pa += da;
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == db){
            pb += db;
        }
    }
    cout << fun(pa) + fun(pb) <<endl;
    return 0;
}