

// 题意：编程实现求1+2+3+...和的程序，要求得到使使和数大于1000的最小正整数。

# include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 1; ; i++){
        sum += i;
        if(sum > 1000){
            cout << i<< endl;
            break;
        }
    }

    return 0;
}