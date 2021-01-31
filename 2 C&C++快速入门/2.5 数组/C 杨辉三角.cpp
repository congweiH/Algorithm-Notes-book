

// 杨辉三角

#include <iostream>
using namespace std;

int a[15][15];
int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= i; j++){
            if(j==1 || i==j){
                a[i][j] = 1;
            } else{
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}