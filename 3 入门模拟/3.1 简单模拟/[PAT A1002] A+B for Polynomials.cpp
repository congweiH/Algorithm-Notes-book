

#include <iostream>
#include <cmath>
using namespace std;

const double eps = 1e-8;

#define Equ(a, b) ((fabs((a)-(b)))<(eps))

double a[1011];

bool b[1011];

int main(){

    int k1, k2;
    cin >> k1;
    int j;
    double y;

    for(int i = 1; i <= k1; i++){
        cin >> j >> y;
        a[j] = y;
        b[j] = true;
    }
    cin >> k2;
    for(int i = 1; i <= k2; i++){
        cin >> j >> y;
        a[j] += y;
        b[j] = true;
    }
    int sum = 0;
    for(int i = 0; i <= 1000; i++){
        if(b[i] == true && !Equ(a[i], 0)){
                sum ++;
        }
    }
    if(sum == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << sum << ' ';
    for(int i = 1000; i >= 0; i--){
        if(Equ(a[i], 0)) continue;
        if(sum == 1){
            printf("%d %.1lf\n", i, a[i]);
            break;
        }else{
            printf("%d %.1lf ", i, a[i]);
            sum --;
        }
    }



    return 0;
}