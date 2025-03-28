#include<bits/stdc++.h>
using namespace std;
int main(){
    double var1 = 234.345, var2 = 45.698;

    cout << fixed << setprecision(6) << var1 << " - " << var2 << endl;  //six decimal places
    cout << fixed << setprecision(0) << var1 << " - " << var2 << endl;  //no decimal places
    cout << fixed << setprecision(1) << var1 << " - " << var2 << endl;  //one decimal place
    cout << fixed << setprecision(2) << var1 << " - " << var2 << endl;  //two decimal places
    cout << fixed << setprecision(3) << var1 << " - " << var2 << endl;  //three decimal places
    cout << scientific << setprecision(6) << var1 << " - " << var2 << endl;  //scientific notation 'e'
    cout << uppercase << scientific << setprecision(6) << var1 << " - " << var2 << endl;  //scientific notation 'E'
    cout << defaultfloat << var1 << " - " << var2 << endl;  //shortest representation
    cout << defaultfloat << var1 << " - " << var2 << endl;  //shortest representation again
}
