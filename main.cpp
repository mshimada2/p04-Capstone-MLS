//Author: McDermott Liam Shimada 

#include<array>
#include<string>
#include<iostream>
#include<fstream>
#include<ostream>
//#include"numbers.h"


using namespace std;

//prototypes

void solveAttempts(); 


int main()

{

numbers game;
string start;



cout<<"                 "<<endl;
cout<<"Welcome to Countdown! The rules are simple. "<<endl; 
cout<<"You will first be shown a number. "<<endl; 
cout<<"Next, 6 different numbers will be shown "<<endl;
cout<<"that will need to be solved using mathematical "<<endl;
cout<<"means to equal the number that was first shown to you. "<<endl;
cout<<"Depending on the level of difficulty that you select, "<<endl;
cout<<"you will be giving a certain amount of time to solve. "<<endl;
cout<<"If you run out of time, you lose! Now lets play! "<<endl;

do

{

cout<<"Please enter Play to begin: "<<endl;
cin>>start;

if(start == "play" || start == "Play")

{

cout<<"Lets play! "<<endl;



}



}while(start != "play" && start != "Play");
 

while(start == "play" || start == "Play")





return 0;

}






void solveAttempts()


{

int attempts;



while(attempts <= 3 )

{

if (attempts == 1)

{

    cout<<"Wrong! You have two more attempts left to solve. "<<endl;

}

else if (attempts == 2)

{

    cout<<"Wrong! You have one more attempt left to solve. "<<endl;

}

else 

{


    cout<<"Wrong! You lose! "<<endl;



}

}


}


//correctAnswer




