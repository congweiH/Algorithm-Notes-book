
#include <iostream>
using namespace std;


int main(){

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int sum = 0;
        int a;
        while(n--){
            cin>>a;
            sum += a;
        }
        cout << sum <<endl<<endl;
    }

    return 0;
}