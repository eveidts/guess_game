#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "GUESS THE NUMBER \n";
    cout << "you have to guess a random number between 1 to 100 good luck with that huh!\n";
    while (true){
    int attempt=0;
    int input;
    char replay;
    srand(static_cast<unsigned>(time(0)));
    int number = (rand() % (100 - 1 + 1)) + 1;   
    int  hint;
    
    while(input != number){
        cout << "\nnumber of time guessed:" << attempt << endl;
        cout << "Guess the number: " ;
        cin >> input ;
        attempt ++;

    if (input == number){
        cout << "congrats you guess the number: " << input << endl;
        cout << "Play again? (enter y/n): ";
        cin >> replay;

        switch (replay){
            case 'y':
            break;
            case 'n':
            return 0;
            default:
            cout << "invalid input try again";
            }
        }
        
    else {
        int option;
        cout << "AHHH! wrong guess please try again";
        cout << "\n Need a hint? \n";
        cout << "1.Take a hint(will tell ,if you in the range of 10 or not)" << endl;
        cout << "2. Be a  man" << endl ;
        cout << "choose: ";
        cin >> option ;

        if (option == 1){
            if (input < number){
                        if (input + 10 >= number) {
                            cout << "You are a little bit low, but you're within the range of 10!" << endl;
                        } else {
                            cout << "Think bigger!" << endl;
                        }
                    } else if (input > number) {
                        if (input - 10 <= number) {
                            cout << "You are a little bit high, but you're within the range of 10!" << endl;
                        } else {
                            cout << "Think smaller!" << endl;
                        }
                    }
    }
        else if (option == 2){
        }
        else {
            cout << "invalid option please try again!" << endl;
        }
    }
    };
    }
    return 0;
}
