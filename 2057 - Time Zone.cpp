#include<iostream>
using namespace std;
int main()
{
    int S, T, F, time, time2;
    cin >> S >> T >> F;
    time = S + T + F;
    if(time == 24)  //for equal 24
    {
        cout << "0" << endl;
    }
    else if(time < 0)   //for negative value
    {
        time2 = 24 + time;  //minus + minus = plus at "time"
        cout << time2 << endl;
    }
    else if(time > 24)   //for bigger value
    {
        time2 = time - 24;
        cout << time2 << endl;
    }
    else
    {
        cout << time << endl;
    }
}
