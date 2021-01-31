


// 逆序输出
#include <iostream>
using namespace std;

int a[13];

int main(){

    for(int i = 1; i <= 10; i++){
        cin >> a[i];
    }

    for(int i = 10; i>=1 ;i--){
        cout << a[i] << endl;
    }

    return 0;
}