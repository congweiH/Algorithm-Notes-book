/*
给定字符串定义char *a = “I love China!”，读入整数n，输出在进行了a = a + n这个赋值操作以后字符指针a对应的字符串。
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){

    char *a = "I love China!";

    int n;
    cin >> n;

    printf("%s", a + n);


    return 0;
}