#include<iostream>
using namespace std;
int main()
{
    int n;
    string a, b;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        if(a=="ataque" && b=="pedra") cout << "Jogador 1 venceu" << endl;
        else if(a=="pedra" && b=="ataque") cout << "Jogador 2 venceu" << endl;
        else if(a=="pedra" && b=="papel") cout << "Jogador 1 venceu" << endl;
        else if(a=="papel" && b=="pedra") cout << "Jogador 2 venceu" << endl;
        else if(a=="ataque" && b=="papel") cout << "Jogador 1 venceu" << endl;
        else if(a=="papel" && b=="ataque") cout << "Jogador 2 venceu" << endl;
        else if(a=="papel" && b=="papel") cout << "Ambos venceram" << endl;
        else if(a=="pedra" && b=="pedra") cout << "Sem ganhador" << endl;
        else if(a=="ataque" && b=="ataque") cout << "Aniquilacao mutua" << endl;
    }
}
