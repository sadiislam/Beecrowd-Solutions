#include<iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N == 0)
        {
            cout << "vai ter copa!" << endl;
        }
        else if(N>0 && N<101)
        {
            cout << "vai ter duas!" << endl;
        }
        else if(N == EOF)
        {
            break;
        }
    }
}
