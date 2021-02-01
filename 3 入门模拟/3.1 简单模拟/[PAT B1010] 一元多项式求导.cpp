

#include <iostream>
using namespace std;

int xi[11110];
int zhi[11110];

int main(){
    int n = 1;
    while(cin >> xi[n] >> zhi[n]){
        n ++;
    }
    n--;
    for(int i = 1; i <= n; i++){
        xi[i] = xi[i] * zhi[i];
        zhi[i] -= 1;
    }
    if(xi[n] == 0){
        for(int i = 1; i < n - 1; i++){
            cout << xi[i] << ' ' << zhi[i] << " ";
        }
        cout << xi[n-1] << ' ' << zhi[n-1] << endl;
    }else{
        for(int i = 1; i < n; i++){
            if(xi[i] == 0) continue;
            cout << xi[i] << ' ' << zhi[i] << ' ';
        }
        cout << xi[n] << ' ' << zhi[n] << endl;
    }
    return 0;
}