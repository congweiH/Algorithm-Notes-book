
/*
将一个2行3列的矩阵（二维数组）行列互换，存储到另一个3行2列的矩阵中。

要求以整型数据为例来解答。

*/

# include <iostream>
using namespace std;

int a[5][5];
int b[5][5];

int main(){

    for(int i = 1 ; i <= 2; i++){
        for(int j = 1; j <= 3; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 3; j++){
            b[j][i] = a[i][j];
        }
    }

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 2; j++){
            cout << b[i][j] <<' ';
        }
        cout << endl;
    }




    return 0;
}