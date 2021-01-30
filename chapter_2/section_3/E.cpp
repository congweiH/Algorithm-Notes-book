
//题意：奖金计算

#include <iostream>
using namespace std;

int main(){

    double interest, increment;

    cin >> interest;

    if(interest <= 100000){
        increment = interest * 0.1;
    } else if(interest <= 200000){
        increment = 100000 * 0.1 + (interest-100000) * 0.075;
    } else if(interest <= 400000){
        increment = 100000 * 0.1 + 100000 * 0.075 + (interest-200000)*0.05;
    } else if(interest <= 600000){
        increment = 100000 * 0.1 + 100000 * 0.075 + 200000*0.05 + (interest - 400000) * 0.03;
    } else if(interest <= 1000000){
        increment = 100000 * 0.1 + 100000 * 0.075 + 200000*0.05 + 200000 * 0.03 + (interest-600000) * 0.015;
    } else{
        increment = 100000 * 0.1 + 100000 * 0.075 + 200000*0.05 + 200000 * 0.03 + 400000 * 0.015 + (interest-1000000) * 0.01;
    }
    
    printf("%.2lf\n", increment);

    return 0;
}