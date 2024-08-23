#include<iostream>
#include<cmath>  // include cmath for the abs function
using namespace std;

int main()
{
    int i, jump_height, number_of_pipes;
    int pipes_heights[100];

    cin >> jump_height >> number_of_pipes;

    for(i = 0; i < number_of_pipes; i++)
    {
        cin >> pipes_heights[i];
    }

    for(i = 0; i < number_of_pipes - 1; i++)  // Loop should run to number_of_pipes - 1
    {
        if(abs(pipes_heights[i] - pipes_heights[i+1]) > jump_height)  // Check if the frog can reach the next pipe
        {
            cout << "GAME OVER" << endl;
            return 0;  // Exit if the frog cannot jump to the next pipe
        }
    }
    cout << "YOU WIN" << endl;  // If the loop completes, it means the frog can jump all the pipes
    return 0;
}
