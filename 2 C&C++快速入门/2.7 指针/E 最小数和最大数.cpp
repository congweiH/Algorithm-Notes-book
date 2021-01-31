/*

输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
要求用3个函数实现，分别为输入10个数、进行处理、输出10个数。要求使用指针的方法进行处理。
*/

#include <iostream>
#include <cmath>
using namespace std;


void input(int *a){
    for(int i = 1; i <= 10; i++){
        cin >> a[i];
    }
}

void handle(int *a){
    int *mi = &a[1], *ma= &a[1];
    for(int i = 1; i <= 10; i++){
        if(*mi > a[i]){
            mi = &a[i];
        }
        if(*ma < a[i]){
            ma = &a[i];
        }
    }
    swap(*mi, a[1]);
    swap(*ma, a[10]);
}   

void output(int *a){
    for(int i = 1;i <=10;i++){
        cout << a[i] << ' ';
    }
}


int main(){

    int a[15];

    input(a);
    handle(a);
    output(a);
    return 0;
}