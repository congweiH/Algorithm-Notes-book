/*
多项式乘法

input:
2 1 2.4 0 3.2
2 2 1.5 1 0.5
output:
3 3 3.6 2 6.0 1 1.6
*/


#include <iostream>
using namespace std;

double a[10010];
double b[10010];
double res[20010];

int main(){

    int k1, e;
    double c;
    cin >> k1;
    for(int i=1; i<=k1; i++){
        cin >> e >> c;
        a[e] = c;
    }
    int k2;
    cin >> k2;
    for(int i=1; i<=k2; i++){
        cin >> e >> c;
        b[e] = c;
    }
    for(int i=0;i<=1000;i++){
        if(a[i]!=0){
            for(int j=0;j<=1000;j++){
                if(b[j]!=0){
                    res[i+j] += a[i] * b[j];
                }
            }
        }
    }
    int sum = 0;
    for(int i=0;i<=2000;i++){
        if(res[i]!=0){
            sum ++;
        }
    }
    if(sum == 0){
        cout << 0 << endl;
        return 0; 
    }
    cout << sum << ' ';
    for(int i=2000;i>=0;i--){
        if(res[i]!=0){
            if(sum==1) break;
            //cout << i << ' ' << res[i] << ' ';
            printf("%d %.1lf ", i, res[i]);
            sum --;
        }
    }
    for(int i=0;i<=2000;i++){
        if(res[i]!=0){
            printf("%d %.1lf\n", i, res[i]);
            //cout << i << ' ' << res[i] << endl; 
            break;
        }
    }
    return 0;
}