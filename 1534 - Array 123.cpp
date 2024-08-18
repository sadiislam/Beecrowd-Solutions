#include<iostream>
using namespace std;
int main()
{
    int i,j,N;
    while(cin>>N)
    {
        if(N == EOF)
        {
            break;
        }
        int M[N][N], k = N-1;
        //filling array with appropriate values
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                if(j==k)
                {
                    M[i][j] = 2;
                }
                else if(i==j)
                {
                    M[i][j] = 1;
                }
                else
                {
                    M[i][j] = 3;
                }
            }
            k--;
        }
        //printing output
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                cout << M[i][j];
            }
            cout << endl;
        }
    }
}
