
// 洗牌

#include <iostream>
using namespace std;

string change(int n){
    if( n / 13 == 0 || n == 13){
        return "S" + to_string((n-1)%13+1);
    } else if(n / 13 == 1 || n == 26){
        return "H" + to_string((n-1)%13+1);
    } else if(n / 13 == 2 || n == 39){
        return "C" + to_string((n-1)%13+1);
    } else if(n / 13 == 3 || n == 52){
        return "D" + to_string((n-1)%13+1);
    } else{
        return "J" + to_string(n%13);
    }
}

int b[100];
struct node{
    int before;
    int after;
}a[100];
int main(){ 

    int n;
    cin >> n;
    for(int i = 1; i <= 54;i++){
        cin >> b[i];
    }
    for(int i = 1; i <= 54; i++){
        a[i].before = i;
    }
    // 处理
    while(n--){
        for(int i = 1; i <= 54; i++){
            a[b[i]].after = a[i].before;
        }
        for(int i = 1; i <= 54; i++){
            a[i].before = a[i].after;
        }
    }
    // 输出
    for(int i = 1; i < 54; i++){
       cout << change(a[i].before) + " ";
    }
    cout << change(a[54].before) << endl;
    return 0;
}