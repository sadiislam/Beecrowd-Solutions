#include<iostream>
using namespace std;
int main()
{
    int T, count=1;
    string s, r;
    cin >> T;
    while(T--)
    {
        cin >> s >> r;
        cout << "Caso #" << count++ << ": ";
        if(s==r) cout << "De novo!" << endl;
        else if(s=="pedra" && r=="papel") cout << "Raj trapaceou!" << endl;
        else if(s=="pedra" && r=="tesoura") cout << "Bazinga!" << endl;
        else if(s=="pedra" && r=="lagarto") cout << "Bazinga!" << endl;
        else if(s=="pedra" && r=="Spock") cout << "Raj trapaceou!" << endl;
        else if(s=="papel" && r=="pedra") cout << "Bazinga!" << endl;
        else if(s=="papel" && r=="tesoura") cout << "Raj trapaceou!" << endl;
        else if(s=="papel" && r=="lagarto") cout << "Raj trapaceou!" << endl;
        else if(s=="papel" && r=="Spock") cout << "Bazinga!" << endl;
        else if(s=="tesoura" && r=="pedra") cout << "Raj trapaceou!" << endl;
        else if(s=="tesoura" && r=="papel") cout << "Bazinga!" << endl;
        else if(s=="tesoura" && r=="lagarto") cout << "Bazinga!" << endl;
        else if(s=="tesoura" && r=="Spock") cout << "Raj trapaceou!" << endl;
        else if(s=="lagarto" && r=="pedra") cout << "Raj trapaceou!" << endl;
        else if(s=="lagarto" && r=="papel") cout << "Bazinga!" << endl;
        else if(s=="lagarto" && r=="tesoura") cout << "Raj trapaceou!" << endl;
        else if(s=="lagarto" && r=="Spock") cout << "Bazinga!" << endl;
        else if(s=="Spock" && r=="pedra") cout << "Bazinga!" << endl;
        else if(s=="Spock" && r=="papel") cout << "Raj trapaceou!" << endl;
        else if(s=="Spock" && r=="tesoura") cout << "Bazinga!" << endl;
        else if(s=="Spock" && r=="lagarto") cout << "Raj trapaceou!" << endl;
        }
}
