/*

分数序列求和


*/

#include <iostream>
using namespace std;


int main(){

    double sum = 0;

    int up = 2;
    int dowm = 1;

    for(int i = 1; i <= 20; i++){
        sum += 1.0*up / dowm;

        int temp = dowm;
        dowm = up;
        up = up + temp;
    }

    printf("%.6lf\n", sum);

    return 0;
}