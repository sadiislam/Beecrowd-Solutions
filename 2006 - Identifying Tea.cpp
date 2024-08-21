#include<iostream>
using namespace std;
int main()
{
    int T, i, X[5], count=0;
    cin >> T;
    //collecting 5 ans
    for(i=0; i<5; i++)
    {
        cin >> X[i];
        if(X[i] == T)
        {
            count++;
        }
    }
    //printing numb of contestants
    cout << count << endl;
}
