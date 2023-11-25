# include <iostream>
# include <cstdlib>
# include <ctime>
# include <fstream>
using namespace std;

int main(){
    srand(time(NULL));
    int GeneratedNum = rand()%15 + 1;

    string NAME;
    cout << "Enter your NAME: ";
    cin >> NAME;

    ofstream myfile(NAME, ios::app);
    myfile << "The User's Name is: " << NAME << endl;
    myfile << "The system Generated Number was: " << GeneratedNum << endl;

    int UserInput;
    cout << "Welcome to the Number Guessing Game " << NAME << "." << endl;
    cout << "You have to guess a number from 1 to 15." << endl;
    cout << "You will have 4 Chances to make the right guess." << endl;
    cout << "Give your input here: ";
    
    int Chances = 4;
    while (Chances > 0){

        cin >> UserInput;

        Chances--;
        if (UserInput > GeneratedNum){
            cout << "Your guess was high!" << endl;
            cout << "Chances remaining = " << Chances << endl; 
        }

        else if (UserInput < GeneratedNum){
            cout << "Your guess was low!" << endl;
            cout << "Chances remaining = " << Chances << endl;
        }

        else if (UserInput == GeneratedNum){
            cout << "You have guessed the right Number!" << endl;
            cout << "The Correct Number was " << GeneratedNum << endl;
            cout << "Congragulations you have won!" << endl;
            myfile << "Result : Congragulations you have won!" << endl;
            cout << "Thanks for Playing, Hope to see you play again!" << endl;
            break;
        }

        if (Chances > 0){
            cout << "Have another guess: ";
        }
        else {
            cout << "OOPS! You have run out of Chances:) " << endl;
            cout << "Sorry, you lost the game!" << endl;
            myfile << "Result : Sorry, you lost the game!" << endl;
            cout << "Hope you play our game later on! " << endl;
        }

    }

    int Num = 4 - Chances;
    myfile << "The Number of tries: " << Num << endl; 
    myfile.close();
    myfile << endl;

    return 0;
} 