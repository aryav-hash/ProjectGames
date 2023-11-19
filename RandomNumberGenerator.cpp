# include <bits/stdc++.h>
# include <cstdlib>
# include <ctime>
using namespace std;

int main(){
    srand(time(NULL));

    cout << "Welcome to the Number Guessing Game." << endl;
    cout << "You have 4 chances. Hope you make the most out of it." << endl;
    cout << "Guess a Number from 1 to 10: ";

    int Chances = 4;
    int Score = 0;
    while (Chances > 0){
        int UserInput;
        cin>>UserInput;

        int GeneratedNum = rand()%10+1;

        if (UserInput != GeneratedNum){
            cout << "The Computer Generated Number is: " << GeneratedNum << endl;
            cout << "Your Guessed Number is: " << UserInput << endl;
            cout << "Sorry! You guessed the wrong number." << endl;
            cout << "Your Current Score is: " << Score << endl;
        }
        else{
            Score++;
            cout << "You have Guessed the right Number! Congragulations!" << endl;
            cout << "Your Current Score is: " << Score << endl;
        }

        Chances--;
        cout << "Chances Remaining: " << Chances << endl;
        if (Chances > 0){
            cout << "Have another Guess: ";
        }
        else{
            cout << "Looks you have run out of Chances!" << endl;
        }
    }


    if (Score > 0){
        cout << "You have won the game:) " << endl;
        cout << "Your Score: " << Score << endl;
        cout << "Hope you play our game again." << endl;
    }
    else{
        cout << "Sorry, you have lost the game." << endl;
        cout << "Your Score: " << Score << endl;
        cout << "Hope you try again." << endl;
    }

    return 0;
}