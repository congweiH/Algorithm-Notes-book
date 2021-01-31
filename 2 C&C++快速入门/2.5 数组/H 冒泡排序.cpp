
/*
从键盘上输入10个整数，用冒泡法对这10个数进行排序（由小到大）。

*/

#include <iostream>
using namespace std;

int a[13];

int main(){

    for(int i = 0; i < 10; i++)
        cin >> a[i];

    for(int i = 1; i < 10; i++){
        // n - 1 趟
        for(int j = 0 ; j < 10 - i; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j+1]);
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout << a[i] << endl;
    }



    return 0;
}