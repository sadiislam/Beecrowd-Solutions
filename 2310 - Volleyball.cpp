#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n, s, b, a, s1, b1, a1, i, sumS=0, sumB=0, sumA=0, sumS1=0, sumB1=0, sumA1=0, perS, perB, perA;
    string name;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> name;
        cin >> s >> b >> a >> s1 >> b1 >> a1;
        sumS  += s;
        sumB  += b;
        sumA  += a;
        sumS1 += s1;
        sumB1 += b1;
        sumA1 += a1;
    }
    perS = (sumS1 * 100) / sumS;
    perB = (sumB1 * 100) / sumB;
    perA = (sumA1 * 100) / sumA;

    cout << fixed << setprecision(2) << "Pontos de Saque: "<< perS << " %." << endl << "Pontos de Bloqueio: " << perB << " %." << endl << "Pontos de Ataque: " << perA << " %." << endl;
}
