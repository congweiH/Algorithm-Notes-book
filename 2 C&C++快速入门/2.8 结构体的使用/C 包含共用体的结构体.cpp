/*
题目描述
设有若干个人员的数据，其中包含学生和教师。学生的数据中包括：号码、姓名、性别、职业、班级。
教师的数据包括：号码、姓名、性别、职业、职务。可以看出，学生和教师所包含的数据是不同的。
现在要求把这些数据放在同一个表格中储存，使用结构体中的共用体实现。结构体定义如下：
struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class;
        char position[10];
    }category;
};
在以上的结构体中，如果job项为s（学生），则第5项为class（班级）；如果job项是t（教师），则第5项为position（职务）。
输入几个人员的数据，将其保存在以上包含共用体的结构体数组中，并输出。
*/
#include <iostream>
using namespace std;
struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int Class;
        char position[10];
    }category;
} info[110];
int main(){

    int n;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> info[i].num >> info[i].name >> info[i].sex >>info[i].job;
        if(info[i].job == 's'){
            cin >> info[i].category.Class;
        }else{        
            cin >> info[i].category.position;
        }
    }
    for(int i = 0;i < n; i++){
        cout << info[i].num << ' ' << info[i].name << ' '<< info[i].sex << ' ' << info[i].job << ' ';
        if(info[i].job == 's'){
            cout << info[i].category.Class << endl;
        }else{
            cout << info[i].category.position << endl;
        }
    }

    return 0;
}