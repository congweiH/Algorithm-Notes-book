/*
题目描述
有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩。
读入这10个学生的数据，要求输出3门课程的总平均成绩，以及个人平均分最高的学生的数据（包括学号、姓名、3门课程成绩、平均分数）。
*/

#include <iostream>
using namespace std;
struct Student{
    int num;
    char name[20];
    int math;
    int english;
    int chinese;
} stu[20];

int main(){

    double math = 0, english = 0, chinese = 0;
    int score[20];
    
    int ma = 0, pos = 0;

    for(int i = 0; i < 10; i++){
        score[i] = 0;
        cin >> stu[i].num >> stu[i].name >> stu[i].math >> stu[i].english >> stu[i].chinese;

        math += stu[i].math;
        english += stu[i].english;
        chinese += stu[i].chinese;
        score[i] = stu[i].math + stu[i].english + stu[i].chinese;

        if(ma < score[i]){
            ma = score[i];
            pos = i;
        }
    }

    printf("%.2lf %.2lf %.2lf\n", math/10, english/10, chinese/10);

    cout << stu[pos].num << ' ' << stu[pos].name << ' ' << stu[pos].math << ' ' << stu[pos].english << ' ' <<stu[pos].chinese << endl;



    return 0;
}