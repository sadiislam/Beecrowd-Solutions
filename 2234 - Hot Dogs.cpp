#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float h, p, avg;
    cin >> h >> p;
    avg = h/p;
    cout << fixed << setprecision(2) << avg << endl;
}
