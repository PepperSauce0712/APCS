//e623
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int round=0;
    int sum=0;
    while(num>sum)
    {
        round+=1;
        sum+=4*round;
    }
    sum-=4*round;
    if(num-sum<=round)
    {
        cout<<"Pen";
    }
    if(num-sum>round&&num-sum<=2*round)
    {
        cout<<"Pineapple";
    }
    if(num-sum>2*round&&num-sum<=3*round)
    {
        cout<<"Apple";
    }
    if(num-sum>3*round&&num-sum<=4*round)
    {
        cout<<"Pineapple pen";
    }
}