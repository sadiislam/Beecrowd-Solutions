#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c;
    double M[12][12], sum=0, avg;
    int m=1,n=11, i, j, count=0;
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
    for(i=0; i<5; i++)
    {
        for(j=m; j<n; j++)
        {
            sum += M[i][j];
            count++;
        }
        m++;
        n--;
    }
    //calculating average
    avg = sum / (double)count;

    //printing output
    if(c == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << avg << endl;
    }

}
