
/*

有序插入

*/

#include <iostream>
using namespace std;

int a[20];

int main(){

    for(int i = 1; i <= 9; i++){
        cin >> a[i];
    }
    int b;
    cin >> b;
    int pos=10;
    for(int i = 1; i<=9; i++){
        if(b < a[i]){
            pos = i;
            break;
        }
    }

    for(int i = 9; i >= pos; i--){
        a[i+1] = a[i];
    }
    a[pos] = b;

    for(int i= 1;i<=10;i++){
        cout << a[i] <<endl;
    }

    return 0;
}