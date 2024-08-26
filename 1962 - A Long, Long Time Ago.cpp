#include<iostream>
using namespace std;
int main()
{
    int n, t, i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> t;
        if(t>=2015){
            cout << t-2014 << " A.C." << endl;
        }
        else if(t<2015){
            cout << 2015-t << " D.C." << endl;
        }
    }
}
