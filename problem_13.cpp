// Develop a C++ program that simulates a basic game of Rock, Paper, Scissors between a user and the computer. Use random numbers and loops for gameplay.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int userchoice;
    int computerchoice;
    int userscore = 0;
    int computerscore = 0;
    int rounds;

    cout << "Welcome to Rock, Paper and Scissors!" << endl;
    cout << "Enter the number of rounds you want to play";
    cin >> rounds;

    for (int round = 1; round <= rounds; ++round)
    {
        cout << "\nRound" << round << "-choose your move:" << endl;
        cout << "For\n Rock enter 1 \n Paper enter 2 \n Scissor enter 3";
        cout << "Enter your choice (1/2/3)";
        cin >> userchoice;

        // generate random number between 1 to 3.
        computerchoice = rand() % 3 + 1;

        if (userchoice == computerchoice)
        {
            cout << "It's a Tie" << endl;
        }
        else if ((userchoice == 1 && computerchoice == 3) ||
                 (userchoice == 2 && computerchoice == 1) ||
                 (userchoice == 3 && computerchoice == 2))
        {
            cout << "You win this round" << endl;
            userscore++;
        }
        else
        {
            cout << "Computer win this round" << endl;
            computerscore++;
        }
    }

    cout<<"\nGame Over!"<<endl;
    cout<<"You scored "<<userscore<<" points"<<endl;
    cout<<"Computer scored "<<computerscore<<" points"<<endl;

    // To check score.
    if(userscore>computerscore)
    {
        cout<<"Congratulation you win"<<endl;
    }
    else if(computerscore>userscore)
    {
        cout<<"Computer Wins. Better kuck next time"<<endl;
    }
    else
    {
        cout<<"It's a Tie!"<<endl;
    }
    return 0;
}