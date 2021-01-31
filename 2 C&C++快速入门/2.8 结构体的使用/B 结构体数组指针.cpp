

/*

题目描述
定义一个结构体student，存储学生的学号、名字、性别和年龄，读入每个学生的所有信息，保存在结构体中，并输出。结构体student的定义如下：
struct student {
    int num;
    char name[20];
    char sex;
    int age;
};
本题要求使用指向结构体数组的指针进行输入和输出。

*/
#include <iostream>
using namespace std;

struct student {
    int num;
    char name[20];
    char sex;
    int age;
} stu[30];

int main(){
    int n;
    cin >> n;
    student *p = stu;
    for(int i = 0; i < n; i++){
        cin >> (*(p+i)).num >> (*(p+i)).name >> (*(p+i)).sex >> (*(p+i)).age;
    }

    for(int i = 0; i < n; i++){
        cout << (*(p+i)).num <<' '<< (*(p+i)).name <<' '<< (*(p+i)).sex <<' '<< (*(p+i)).age << endl;;
    }

    return 0;
}