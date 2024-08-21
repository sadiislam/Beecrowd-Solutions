#include<iostream>
using namespace std;
int main()
{
    int T, i, R1, R2, R3;
    cin >> T;
    for(i=0; i<T; i++)
    {
        cin >> R1 >> R2;
        R3 = R1 + R2;
        cout << R3 << endl;
    }
}
