/*
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势

现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入格式：
输入第 1 行给出正整数 N（≤10^5），即双方交锋的次数。
随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。
C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。

输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。
第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。
如果解不唯一，则输出按字母序最小的解。

输入样例：
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
输出样例：
5 3 2
2 3 5
B B
*/

#include <iostream>
using namespace std;

int a1, a2, a3;

int ab, ac, aj;
int bb, bc, bj;

int main(){
    int n;
    cin >> n;
    string a, b;
    while(n--){
        cin >> a >> b;
        if( a == b){
            a2 ++;
        }else if(a == "J"){
            if(b == "B"){
                a1 ++;
                aj ++;
            }else if(b == "C"){
                a3 ++;
                bc ++;
            }
        }else if(a == "B"){
            if(b == "J"){
                a3 ++;
                bj ++;
            }else if(b == "C"){
                a1 ++;
                ab ++;
            }
        }else if(a == "C"){
            if(b == "B"){
                a3 ++;
                bb ++;
            }else if(b == "J"){
                a1 ++;
                ac ++;
            }
        }
    }

    cout << a1 << ' ' << a2 << ' ' << a3 << endl;
    cout << a3 << ' ' << a2 << ' ' << a1 << endl;

    if(ab >= ac && ab >= aj){
        cout << "B ";
    }else if(ac >= ab && ac >= aj){
        if(ac == ab){
            cout << "B ";
        }else{
            cout << "C ";
        }
    }else if(aj >= ab && aj >= ac){
        if(aj == ab){
            cout << "B ";
        }else if(aj == ac){
            cout << "C ";
        }else{
            cout << "J ";
        }
    }

    if(bb >= bc && bb >= bj){
        cout << "B";
    }else if(bc >= bb && bc >= bj){
        if(bc == bb){
            cout << "B";
        }else{
            cout << "C";
        }
    }else if(bj >= bb && bj >= bc){
        if(bj == bb){
            cout << "B";
        }else if(bj == bc){
            cout << "C";
        }else{
            cout << "J";
        }
    }

    cout << endl;
    return 0;
}