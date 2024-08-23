#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int T, i, pNumb, pQuan;
    float v1, v2, v3, v4, v5, amount;
    cin >> T;
    for(i=0; i<T; i++){
        cin >> pNumb >> pQuan;
        if(pNumb == 1001){
            v1 = pQuan * 1.50;
        }
        if(pNumb == 1002){
            v2 = pQuan * 2.50;
        }
        if(pNumb == 1003){
            v3 = pQuan * 3.50;
        }
        if(pNumb == 1004){
            v4 = pQuan * 4.50;
        }
        if(pNumb == 1005){
            v5 = pQuan * 5.50;
        }
    }
    amount = v1 + v2 + v3 + v4 + v5;
    cout << fixed << setprecision(2) << amount << endl;
}
