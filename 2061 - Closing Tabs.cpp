#include<iostream>
using namespace std;
int main()
{
    int n, m;
    string s;
    cin >> n >> m;
    int count = n;
    while(m--){
        cin >> s;
        if(s == "fechou") count++;
        else count--;
    }
    cout << count << endl;
}
