#include "numbers.h"
#include<iostream>
#include<string>
using namespace std;

void numbers::displayMessage(){


        cout<<"I display a message "<<endl;

}



void numbers::checkAttempts(int attempts){
int attempts = 0;
        if(attempts == 1){

                cout<<"Wrong! You have 2 more attempts. "<<endl;
        }


        if(attempts == 2){

                cout<<"Wrong! You have 1 more attempts. "<<endl;

        }

        else if(attempts == 3){

                cout<<"Wrong! You lose. "<<endl;
                attempts = 0;
        }

        else{

                cout<<"Error: Restart the program. "<<endl;


        }
}

//void numbers::winner(){








