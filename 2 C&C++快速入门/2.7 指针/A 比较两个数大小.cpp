/*
输入a和b两个整数，按先大后小的顺序输出a和b。注意请使用指针变量的方式进行比较和输出。
*/

#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int * pa = &a;
    int * pb = &b;

    if(*pa < *pb){
        cout << *pb <<' ' << *pa << endl;
    } else{
        cout << *pa << ' ' << *pb << endl;
    }

    return 0;
}