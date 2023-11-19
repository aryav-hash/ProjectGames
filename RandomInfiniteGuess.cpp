# include <bits/stdc++.h>
# include <cstdlib>
# include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int GeneratedNum = rand()%20+1;
    cout << "Welcome to the Number Guessing Game." << endl;
    cout << "The game ends when you guess the correct Number." << endl;
    cout << "Try to guess the system generated Number from 1 to 20. " << endl;
    cout << "Put your guess here: ";
    
    int Flag = 0;
    int tries = 1;
    while (Flag == 0){
        int UserInput;
        cin>>UserInput;

        if (UserInput != GeneratedNum){
            if (UserInput > GeneratedNum){
                cout << "Your guess was high !" << endl;
                cout << "Have another guess: ";
                tries++;
            }
            else{
                cout << "Your guess was low !" << endl;
                cout << "Have another guess: ";
                tries++;
            }
        }
        
        else if (UserInput == GeneratedNum){
            cout << "Your guess was right you have won the game! " << endl;
            cout << "Computer generated Number = " << GeneratedNum << endl;
            cout << "It took you " << tries << " tries." << endl;
            cout << "Congragulations!" << endl;
            break;
        }
    }
    return 0;
}

   
