#include "numbers.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void numbers::displayMessage(){


        cout<<"Welcome to the Math Game. In this game you will be given a bank of 5 preselected numbers. Next, you will be shown a number. The object of the game is to use the 5 numbers to equal the number that was shown to you by using mathematical means. For example, if I am given 1,2,3,4, and 5 and I am shown 15, my answer will look like this: 1+2+3+4+5. You are allowed to use multiplication (*), division (/), addition(+), subtraction(-), and paraenthesis(). You will also have three lives throughout the game. If you put in the wrong answer you will lose a life. If you lose all three lives you lose the game. Now are you ready for a challenge? "<<endl;

}



int numbers::checkAttempts(int attempts){
    
    tries = attempts;;
    
    if(attempts == 1){

                cout<<"Wrong! You have 2 more attempts. "<<endl;
        }


        else if(attempts == 2){

                cout<<"Wrong! You have 1 more attempts. "<<endl;

        }

        else if(attempts == 3){

                cout<<"Wrong! You lose. "<<endl;
                attempts = 0;


        }

        else{

                cout<<"Error. End program by pressing cntrl c. If you want to play again type in ./a.out . "<<endl;


        }
    return 0;
}


void numbers::winner(){

cout << "winner" << endl;

fstream file;
string display = "mytext.txt";
string line;


file.open(display.c_str());

while(!file.eof()){

getline(file,line);
cout << line << endl;

}

file.close();

}


