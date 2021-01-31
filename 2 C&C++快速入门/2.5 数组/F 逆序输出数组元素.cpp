
/*
题目描述
从键盘上输入10个整数，存储在一个长度为10的整型数组中，要求将输入的10个数逆序输出。

如输入为：0,1,2,3,4,5,6,7,8,9 输出为9,8,7,6,5,4,3,2,1,0

*/

#include <iostream>
using namespace std;

int a[14];

int main(){

    for(int i= 1; i <= 10; i++){
        cin>>a[i];
    }

    for(int i = 10; i>=1;i--){
        cout << a[i] <<endl;
    }


    return 0;
}