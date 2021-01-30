
// 题意：一元二次方程求根, 不保证有实根

#include <iostream>
#include <cmath>
using namespace std;


int main(){

    double a, b, c;
    cin >> a >> b >> c;

    double delta = b*b-4*a*c;

    if(delta < 0) {
        cout << "No real roots!" << endl;
    } else{
        double r1 = (-b+sqrt(delta))/(2*a);
        double r2 = (-b-sqrt(delta))/(2*a);
        printf("r1=%7.2lf\n", r1);
        printf("r2=%7.2lf", r2);
    }

    return 0;
}