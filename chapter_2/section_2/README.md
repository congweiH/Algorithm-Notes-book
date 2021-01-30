# 顺序结构

## A 按要求输出信息(1)

```
编写一个C程序，要求在屏幕上输出一下一行信息。

This is my first c program!
```

```c++
// 题目链接 http://codeup.cn/problem.php?cid=100000566&pid=0

// 题意：直接输出打印

#include <iostream>
using namespace std;

int main(){

    cout << "This is my first c program!" << endl;

    return 0;
}
```

## B 按要求输出信息(2)

```
编写一个C语言程序，输出以下信息：

********************

Very Good!

********************
```

```c++
// 题意：直接输出打印

#include <iostream>
using namespace std;

int main(){

    cout << "********************" <<endl;
    cout << "Very Good! " <<endl;
    cout << "********************" <<endl;

    return 0;
}
```

## C 求两个整数之和(1)

```
设置3个变量a, b, sum，其中a, b用来存放两个整数，sum用来存放a, b两个数的和，通过赋值（即采用赋值运算符"="）的方式将a初始化为123，b初始化为456，并把两个变量相加的结果赋值给sum。
```

```c++
// 题意：求两个整数之和

#include <iostream>
using namespace std;

int main(){

    int a = 123;
    int b = 456;
    int sum = a + b;
    cout << "sum=" << sum << endl;

    return 0;
}
```

## D 求两整数数之和(2)

```
从键盘上输入两个整数，并输出这两个数的和，即你的任务是计算a+b。
```

```c++
// 题意：求两个整数之和

#include <iostream>
using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    cout << a + b<< endl;

    return 0;
}
```

## E 求一元二次方程的根

```
求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，且保证b2-4ac>0。

程序中所涉及的变量均为double类型。
```

```c++
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
```

## F 字符输入输出

```
从键盘输入三个字符BOY，然后把他们输出到屏幕上
```

```c++
// 题意: 字符输入输出

#include <iostream>
using namespace std;


int main(){


    char a, b, c;

    cin >> a >> b >> c;

    cout << a << b << c <<endl;

    return 0;
}
```

