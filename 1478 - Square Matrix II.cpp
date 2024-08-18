#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,N;
    while(true)
    {
        cin >> N;
        if(N==0)
        {
            break;
        }
        int M[N][N];
        //filling array with appropriate values
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                M[i][j] = abs(i-j)+1;
            }
        }
        //printing output
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                if(j==0)
                {
                    cout << setw(3) << M[i][j];
                }
                else
                {
                    cout << setw(4) << M[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
