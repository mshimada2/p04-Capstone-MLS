//Author: McDermott Liam Shimada 
#include<array>
#include<string>
#include<iostream>
#include<fstream>
#include"numbers.h"

using namespace std;


int main(){


       //variables
        numbers game;
        int attempts = 0;
        string start;
        string answer;
        int questions[] = {45, 11, 105000};

        //dispays introduction message from numbers.cpp
        
        game.displayMessage();
        
        //start game
        cout << "Type in play to start game. Type in cntrl c to quit or start program over "<< endl;
        cin >> start;

        //checks to see if user inp is right / also starts the game if the user inputs play

        while(start == "play" || start == "Play"){
                cout << "Lets play!" << endl;

                //for loop runs through the three number problems

                for(int i = 0; i < 3; i++){

                        cout<<"Use these numbers to solve for the numbers shown to you: "<<endl;
                        cout<<"36,100,60,50,35 "<<endl;
                        cout<<questions[i]<<endl;
                        cin>>answer;
                        
                        //switch enables the program to go through each and every problem until the user loses or wins 

                        switch(i){

                                case 0: 
                                                
                                        if(answer == "((36*100)/60)-(50-35)"){

                                                 cout<<"Correct"<<endl;

                                        }



                                        else{

                                        //if user puts in wrong input attempts is added up and checkAttempts() runs its
                                        //function to tell the user theyre wrong and how many attempts they have

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                                case 1:


                                        if(answer == "(36-35)+(100-50)+60"){

                                               cout<<"Correct"<<endl;

                                        }


                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                                case 2: 

                                        if(answer == "(36*35*100*50)/60)"){

                                                game.winner();

                                        }

                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                        }
                }
                
                //breaks the program once user wins or lose

              break;

        }
        return 0;

        }


