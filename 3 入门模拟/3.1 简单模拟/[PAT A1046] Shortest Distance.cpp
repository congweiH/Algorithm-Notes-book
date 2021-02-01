

#include <iostream>
#include <cmath>
using namespace std;

int d[111010];
int sum[111010];
int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> d[i];
        sum[i+1] = sum[i] + d[i];
    }
    // for(int i = 1;i<=n;i++){
    //     cout << sum[i] << ' ';
    // }
    // cout << endl;
    int m;
    cin >> m;
    while(m--){
        int a1, a2;
        cin >> a1 >> a2;
        if(a1 > a2) swap(a1, a2);
        cout << min(sum[a2]-sum[a1], sum[n+1]-(sum[a2]-sum[a1])) << endl;
    }

    return 0;
}