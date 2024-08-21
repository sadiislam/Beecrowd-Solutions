#include<iostream>
using namespace std;
int main()
{
    int i, C, N;
    cin >> C;
    for(i=0; i<C; i++)
    {
        cin >> N;
        if(N%2==0){
            cout << "0" << endl;
        }
        else if(N%2!=0){
            cout << "1" << endl;
        }
    }
}
