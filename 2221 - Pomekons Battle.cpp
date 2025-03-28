#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int b;
        cin >> b;
        int a1, d1, l1, a2, d2, l2;
        cin >> a1 >> d1 >> l1; cin >> a2 >> d2 >> l2;

        //calculating dabriel's & Guarte's
        double vd, vg;
        if(l1%2 == 0){ //checking if level is even
            vd =(a1+d1) / 2.0 + b; //adding bonus if level even
        }
        else{
            vd = (a1+d1) / 2.0;
        }

        if(l2%2 == 0){
            vg = (a2+d2) / 2.0 + b;
        }
        else{
            vg = (a2+d2) / 2.0;
        }

        if(vd > vg){
            cout << "Dabriel" << endl;
        }
        else if(vg > vd){
            cout << "Guarte" << endl;
        }
        else{
            cout << "Empate" << endl;
        }
    }
}
