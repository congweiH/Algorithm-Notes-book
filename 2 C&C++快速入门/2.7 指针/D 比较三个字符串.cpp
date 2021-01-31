/*
输入3个字符串，按从小到大的顺序输出。要求使用指针的方法进行处理。
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string a, b, c;

    cin >> a >> b >> c;

    char *pa = &a[0];
    char *pb = &b[0];
    char *pc = &c[0];

    if(strcmp(pa, pb) > 0){
        swap(pa, pb);
    }
    if(strcmp(pa, pc) > 0){
        swap(pa, pc);
    }
    if(strcmp(pb, pc) > 0){
        swap(pb, pc);
    }

    printf("%s\n%s\n%s\n", pa, pb, pc);
    return 0;
}