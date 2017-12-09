#include "numbers.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

//displays the greeting message

void numbers::displayMessage(){


        cout<<"Welcome to the Math Game. In this game you will be given a bank of 5 preselected numbers. "<<endl; 
        cout<<"Next, you will be shown a number. The object of the game is to use the 5 numbers to equal the number"<<endl;
        cout<<"that was shown to you by using mathematical means. For example, if I am given 1,2,3,4, and 5"<<endl;
        cout<<"and I am shown 15, my answer will look like this: 1+2+3+4+5. You are allowed to use multiplication (*),"<<endl;
        cout<<"division (/), addition(+), subtraction(-), and paraenthesis(). You will also have three lives throughout"<<endl;
        cout<<"the game. If you put in the wrong answer you will keep proceed to the next problem  but you will have lost an attempt to solve attempts to solve. If you answer three problems wrong"<<endl;
        cout<<"you lose the game. Now are you ready for a challenge? "<<endl;

}

//checks user attempts; displays attempts left if they get a problem wrong 

int numbers::checkAttempts(int attempts){
    
    tries = attempts;
    
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

                cout<<" "<<endl;


        }
    return 0;
}


//displays cool message from file 

void numbers::winner(){

cout << "Winner" << endl;

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


