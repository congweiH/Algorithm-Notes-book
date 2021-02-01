

#include <iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    int k = 1;
    while(T--){
        long double a, b, c;
        cin >> a >> b >> c;
        if(a + b > c){
            cout << "Case #"<< k <<": true" <<endl;
        }else{
            cout << "Case #"<< k <<": false"<<endl;
        }
        k++;
    }

    return 0;
}