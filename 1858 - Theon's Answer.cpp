#include<iostream>
using namespace std;
int main()
{
    int N, i, T[101];
    cin >> N;
    for(i=0; i<N; i++){
        cin >> T[i];
    }
    int index=0, small=T[0];
    for(i=1; i<N; i++){
        if(T[i]<small){
            small = T[i];
            index = i;
        }
    }
    cout << index+1 << endl;
}
