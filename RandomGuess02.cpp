# include <bits/stdc++.h>
# include <cstdlib>
# include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int GeneratedNum = rand()%12+1;
    cout << "Welcome to the Number Guessing Game." << endl;
    cout << "You have 4 chances. Hope you make the most out of it." << endl;
    cout << "Try to guess the system generated Number from 1 to 12. " << endl;
    cout << "Put your guess here: ";

    int Chances = 4;
    while (Chances > 0){
        int UserInput;
        cin>>UserInput;

        if (UserInput != GeneratedNum){
            if (UserInput > GeneratedNum){
                Chances--;
                cout << "Your guess was high !" << endl;
                cout << "You have " << Chances << " Chances left" << endl;
                cout << GeneratedNum << endl;
            }
            else{
                Chances--;
                cout << "Your guess was low !" << endl;
                cout << "You have " << Chances << " Chances left" << endl;
                cout << GeneratedNum << endl;
            }
        }
        
        else if (UserInput == GeneratedNum){
            cout << "Your guess was right you have won the game! " << endl;
            cout << "Computer generated Number = " << GeneratedNum << endl;
            cout << "Congragulations! " << endl;
            break;
        }
    
        if (Chances > 0){
            cout << "Have another Guess: ";
        }
        else{
            cout << "Looks you have run out of Chances!" << endl;
            cout << "Sorry, you have lost the game." << endl;
            cout << "The system generated number was: " << GeneratedNum << endl;
            cout << "Hope you play our game again! " << endl;
        }
    }
    return 0;
}

   
