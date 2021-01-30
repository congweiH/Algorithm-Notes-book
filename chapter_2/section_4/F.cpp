
/*
题目描述
输出以下4*5的矩阵

  1  2  3  4  5

  2  4  6  8 10

  3  6  9 12 15

  4  8 12 16 20

要求使用循环实现，注意每行输出5个数字，每个数字占3个字符的宽度，右对齐。

*/

#include <iostream>
using namespace std;

int main(){


    for(int i = 1; i <= 4; i++){
    	for(int j = 1; j <= 5; j++){
			printf("%3d", j * i);
        }
		cout << endl;
    }
    

    return 0;
}