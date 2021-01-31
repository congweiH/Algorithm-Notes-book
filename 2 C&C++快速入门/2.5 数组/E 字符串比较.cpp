
/*
比较两个字符串s1和s2的大小，如果s1>s2，则输出一个正数；若s1=s2，则输出0；若s1<s2，则输出一个负数。

要求：不用strcpy函数；两个字符串用gets函数读入。

例如："A"与"C"相比，由于"A"<"C"，应输出负数，同时由于"A"与"C"的ASCII码差值为2，因此应输出"-2"。

同理："And"和"Aid"比较，根据第2个字符比较的结果，"n"比"i"大5，因此应该输出"5"

样例输入 Copy
And
Aid
样例输出 Copy
5

坑点： 题目没说两个字符串的长度是否相同。按照提交的情况应该默认是相等的

*/
# include <iostream>
# include <cstring>
using namespace std;

char s1[100];
char s2[100];

int main(){

    gets(s1);
    gets(s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int i = 0, j = 0;

    while(i < len1 && j < len2){
        if(s1[i] != s2[j]){
            cout << s1[i] - s2[j] << endl;
            return 0;
        }
        i ++; j++;
    }
    cout << 0 << endl;
    return 0;
}