//尚未解完
#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int sum = 0;
    int round = 0;
    cin >> num;

    while (num > sum)
    {
        sum += 4 * round;
        round+=1;
    }

    num -= (sum + 4*round);
    
    if (num <= round) cout << "Pen";
    if (round < num && num <= round*2) cout << "Pineapple";
    if (round*2 < num && num <= round*3) cout << "Apple";
    if (round*3 < num && num <= round*4) cout << "Pineapple pen";
    
}