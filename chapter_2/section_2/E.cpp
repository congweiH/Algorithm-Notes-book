

// 题目链接 http://codeup.cn/problem.php?cid=100000566&pid=4

// 题意：给定系数a,b,c,求一元二次方程的根,结果输出时，宽度占7位，其中小数部分2位。

// 思路：用求根公式，x = (-b+-delta)/(2*a), 其中 delta = b*b-4aC。
//       
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;

    double delta = b*b - 4*a*c;

    double r1 = (-b+sqrt(delta))/(2*a);
    double r2 = (-b-sqrt(delta))/(2*a);

    printf("r1=%7.2f\n", r1);
    printf("r2=%7.2f", r2);

    return 0;
}