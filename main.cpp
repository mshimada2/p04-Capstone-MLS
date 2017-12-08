//Author: McDermott Liam Shimada 
#include<array>
#include<string>
#include<iostream>
//#include<fstream>
//#include<ofstream>
//#include<ifstream>
#include"numbers.h"

using namespace std;


int main(){
        numbers game;
        int attempts = 0;
        string start;
        string answer;
        int questions[] = {45, 11, 105000};
        
        //start game
        cout << "Ready to play a game? Type in Play or play to start! \n When you are done control c to quit" << endl;
        cin >> start;

        while(start == "play" || "Play"){
                cout << "Lets Play" << endl;


                //       while(attempts > 3){

                //              display_message();

                //do while to check to see if the user wants to play

                /* do{

                   cout<<"Please enter Play to begin or control c to quit: "<<endl;
                   cin>>start;

                   if(start == "play" || start == "Play"){

                   cout<<"Lets play! "<<endl;

                   }

                   }while(start != "play" && start != "Play");

                 */
                //begin solving for the answer

                for(int i = 0; i < 2; i++){

                        cout<<questions[22]<<endl;
                        cout<<"Use these numbers to mathematically solve for the upcoming numbers. "<<endl;
                        cout<<questions[i]<<endl;
                        cin>>answer;

                        switch(i){

                                case 1: 

                                        if(answer == "((36*100/60)-(50-35)"){

                                                // winner();


                                        }



                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                                case 2:


                                        if(answer == "(36-35)-(50-35)"){

                                                //winner();

                                        }


                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                                case 3: 

                                        if(answer == "((36*100/60)-(50-35)"){

                                                //winner();

                                        }

                                        else{

                                                attempts += 1;
                                                game.checkAttempts(attempts);

                                        }

                                        break;

                        }
                }


        }
        return 0;

        }

/*        void checkAttempts(int attempts)

        {

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

        void display_message()

        {


                cout<<"I display a message "<<endl;

        }


        //end program








*/
