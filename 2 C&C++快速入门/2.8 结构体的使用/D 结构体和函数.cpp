/*
题目描述
编写两个函数input和print，分别用来输入5个学生的数据记录和打印这5个学生的记录。
对于每一个学生，其记录包含了学号、名字、3门课程的成绩共5项。用主函数分别调用input和print函数进行输入和输出。
要求使用结构体数组实现，结构体中包括了每个学生的5项记录。
*/

#include <iostream>
using namespace std;

struct Student{
    int num;
    char name[20];
    int math;
    int english;
    int chinese;
} stu[6];

void input(){
    for(int i = 0; i < 5; i++){
        cin >> stu[i].num >> stu[i].name >> stu[i].math >> stu[i].english >> stu[i].chinese;
    }
}
void output(){
    for(int i = 0; i < 5; i++){
        cout << stu[i].num << ' ' << stu[i].name << ' ' << stu[i].math << ' ' << stu[i].english << ' ' << stu[i].chinese <<endl;
    }
}

int main(){

    input();
    output();
    return 0;
}