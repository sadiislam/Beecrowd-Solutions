#include<iostream>
using namespace std;
int main()
{
    int p, j1, j2, r, a, win;
    cin >> p >> j1 >> j2 >> r >> a;

    if (((j1+j2)%2==0 && p==1) || ((j1+j2)%2!=0 && p==0))
    {
        win = 1;
    }
    else
    {
         win = 2;
    }
    if((r==1 && a==0) || (r==0 && a==1))  //after normal playing check cheating filteration
    {
         win = 1;
    }
    else if(r==1 && a==1)
    {
         win = 2;
    }

    cout << "Jogador " << win << " ganha!" << endl;
}
