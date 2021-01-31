
/*
题目描述
Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。即： 

要求输出Fibonacci数列的前20个数。

*/


#include <iostream>
using namespace std;

int a[50];

int main(){

    a[1] = 1;
    a[2] = 1;
    cout << a[1] << endl << a[2] << endl;
    for(int i = 3; i <= 20; i++){
        a[i] = a[i-1] + a[i-2];
        cout << a[i] << endl;
    }


    return 0;
}