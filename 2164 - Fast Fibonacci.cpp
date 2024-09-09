#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double ans;
    cin >> n;
    ans =( (((pow(((1+sqrt(5))/2),n))-(pow(((1-sqrt(5))/2),n)))/sqrt(5)) );
    cout << fixed << setprecision(1) << ans << endl;
}

