#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double M[12][12], sum = 0.0, avg;
    int colNumb, i, j, k;
    char op;
    cin >> colNumb;
    cin >> op;

    //collecting array elements
    for(i=0; i<12; i++)  //row
    {
        for(j=0; j<12; j++)  //column
        {
            cin >> M[i][j];
        }
    }

    for(k=0; k<12; k++)  //sum calculate
    {
        sum += M[k][colNumb];
    }
    avg = sum/12.0;   //avarage calculate

    if(op=='S')  //printing sum
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(op=='M')  //printing avarage
    {
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
