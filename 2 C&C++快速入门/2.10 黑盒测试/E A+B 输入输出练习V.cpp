

#include <iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a, sum = 0;
        while(n--){
            cin >> a;
            sum += a;
        }
        cout << sum <<endl;
    }

    return 0;
}