#include<iostream>
using namespace std;
int main()
{
    int N, m1=0, m2=0, m3=0, m4=0;
    cin >> N;
    int A[N];

    for(int i=0; i<N; i++)
    {
        cin >> A[i];

        if(A[i]%2 == 0){
            m1++;
        }
        if(A[i]%3 == 0){
            m2++;
        }
        if(A[i]%4 == 0){
            m3++;
        }
        if(A[i]%5 == 0){
            m4++;
        }
    }
    cout << m1 << " Multiplo(s) de 2" << endl;
    cout << m2 << " Multiplo(s) de 3" << endl;
    cout << m3 << " Multiplo(s) de 4" << endl;
    cout << m4 << " Multiplo(s) de 5" << endl;
}
