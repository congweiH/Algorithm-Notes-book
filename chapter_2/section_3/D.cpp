
// 三个整数求最大值

#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int a, b, c;

    cin >> a >> b >> c;

    cout << max(max(a,b),c) << endl;

    return 0;
}
