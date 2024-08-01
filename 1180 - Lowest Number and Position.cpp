#include<iostream>
using namespace std;
main()
{
    int n, i, min, pos;
    cin >> n;
    int x[n];

    for(i=0; i<n; i++)  //collecting all inputs
    {
        cin >> x[i];
    }

    min = x[0];
    pos = 0;

    for(i=1; i<n; i++) //finding minimum
    {
        if(x[i]<min)
        {
            min = x[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << min << "\n" << "Posicao: " << pos << endl;
}
