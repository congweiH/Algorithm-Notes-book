/*
题目描述
完成一个对候选人得票的统计程序。假设有3个候选人，名字分别为Li，Zhang和Fun。使用结构体存储每一个候选人的名字和得票数。记录每一张选票的得票人名，输出每个候选人最终的得票数。结构体可以定义成如下的格式：
struct person {
    char name[20];
    int count;
}leader[3] = {“Li”, 0, “Zhang”, 0, “Fun”, 0};
*/
#include <iostream>
using namespace std;

struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main(){
    int n;
    cin >> n;
    string a;
    while(n--){
        cin >> a;
        if(a == "Li"){
            leader[0].count ++;
        }else if(a == "Zhang"){
            leader[1].count ++;
        }else{
            leader[2].count ++;
        }
    }
    for(int i = 0; i < 3; i++){
        cout << leader[i].name << ":" << leader[i].count << endl;
    }

    return 0;
}
