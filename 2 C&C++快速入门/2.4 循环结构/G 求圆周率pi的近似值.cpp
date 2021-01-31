
/*

求圆周率PI的近似值，直到发现某一项的绝对值小于10-6为止（该项不累加）。

*/


#include <iostream>
using namespace std;

int main(){

    double pi = 0;

    int fuhao = 1;

    for(int fenmu = 1; ;fenmu += 2){
        double item = 1.0 / fenmu;
        if(item < 0.000001){
            break;
        }
        pi += item * fuhao;
        fuhao = -fuhao;
    }

    printf("PI=%10.8lf",pi*4);

    return 0;
}