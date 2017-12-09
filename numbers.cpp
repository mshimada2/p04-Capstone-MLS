#include "numbers.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void numbers::displayMessage(string){


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

void numbers::winner(){

string congrats;


open(example.txt.c_str());

getLine(file,line);

congrats = line;

cout<<line<<;

close(example.txt);

return 0;


}


