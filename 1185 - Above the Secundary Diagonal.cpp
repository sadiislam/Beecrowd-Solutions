#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c;
    double M[12][12], sum=0, avg;
    int n=11, i, j;
    cin >> c;

    //taking inputs
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin >> M[i][j];
        }
    }

    //calculating sum
    for(i=0; i<11; i++)
    {
        for(j=0; j<n; j++)
        {
            sum += M[i][j];
        }
        n--;
    }
    //calculating average
    avg = sum / 66.0;

    //printing output
    if(c == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
        cout << fixed << setprecision(1) << avg << endl;
    }

}
