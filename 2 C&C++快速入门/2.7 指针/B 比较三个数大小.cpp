/*
输入a、b、c三个整数，按先大后小的顺序输出a、b和c。注意请使用指针变量的方式进行比较和输出。
*/

#include <iostream>
using namespace std;

int main(){

    int a , b, c;

    cin >> a >> b >> c;

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    if(*pa < *pb){
        swap(*pa, *pb);
    }
    if(*pa < *pc){
        swap(*pa, *pc);
    }
    if(*pb < *pc){
        swap(*pb, *pc);
    }
    
    cout << *pa << ' ' << *pb << ' ' << *pc << endl;



    return 0;
}