#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c;
    string t;
    float l;
    cin >> c;
    while(c--){
        cin >> t;
        l = t.length() / 100.0;
        cout << fixed << setprecision(2) << l << endl;
    }
}
