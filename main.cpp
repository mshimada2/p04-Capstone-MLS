//Author: McDermott Liam Shimada 
#include<array>
#include<string>
#include<iostream>
#include<fstream>
#include"numbers.h"

using namespace std;


int main(){
        
        numbers game;
        int attempts = 0;
        string start;
        string answer;
        int questions[] = {45, 11, 105000};


        game.displayMessage();
        
        //start game
        cout << "Ready to play? "<< endl;
        cin >> start;

        while(start == "play" || start == "Play"){
                cout << "Lets Play" << endl;


                for(int i = 0; i < 3; i++){

                        cout<<"Use these numbers to solve for the numbers shown to you: "<<endl;
                        cout<<"36,100,60,50,35 "<<endl;
                        cout<<questions[i]<<endl;
                        cin>>answer;

                        switch(i){

                                case 0: 
                                                 cout<<answer<<endl;
                                                 cout<<"((36*100/60)-(50-35)"<<endl;

                                        if(answer == "((36*100/60)-(50-35)"){

                                                 game.winner();

                                        }



                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                                case 1:


                                        if(answer == "(36-35)-(50-35)"){

                                               game. winner();

                                        }


                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                                case 2: 

                                        if(answer == "((36*100/60)-(50-35)"){

                                                game.winner();

                                        }

                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                        }
                }
                
              break;

        }
        return 0;

        }


