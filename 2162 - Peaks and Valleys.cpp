#include <iostream>
using namespace std;
int main()
{
    int n, i, count = 0;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n == 2 && a[0] == a[1]){
        count++;
    }
    else{
        for (i = 2; i < n; i++){
            if ((a[i] >= a[i-1] && a[i-1] >= a[i-2]) || (a[i] <= a[i-1] && a[i-1] <= a[i-2])){
                count++;
            }
        }
    }

    if (count == 0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}
