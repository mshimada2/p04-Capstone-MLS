#ifndef _NUMBERS_H_
#define _NUMBERS_H_
#include <iostream>
#include <string>
#include <array>
#include<fstream>


using namespace std;


//make class with variables and functions

class numbers

{


        private:

                //int numberSet[] = {36, 100, 60, 50, 35};
            int tries;

            ifstream file;


        public:
                
                void displayMessage();

                int checkAttempts(int);

                void winner();


};

#endif

