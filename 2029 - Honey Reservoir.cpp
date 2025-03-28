#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const double pi = 3.14;
    double v, r, h, d, a;
    while(cin >> v >> d){
        r = d / 2;
        a = pi * r * r;
        h = v / a;
        cout << fixed << setprecision(2) << "ALTURA = " << h << endl << "AREA = " << a << endl;
    }
}
