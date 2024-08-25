#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a, b, per;
    cin >> a >> b;
    per = ((b / a) * 100) - 100;
    cout << fixed << setprecision(2) << per << "%" << endl;
}
