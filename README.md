# p04-Capstone-MLS




#Input/Output

file: main.cpp
lines:26-27
[main.cpp lines 26-27](/main.cpp#L26)

My use of Input/Output is appropriate due to the fact that it simply asks for the user to enter play in order to start the game. Theres really not a whole lot to say about this one.



#Control Flow

file: main.cpp
lines: switch(45-105) if, else if, else(49-101) 
[main.cpp lines 45-105](/main.cpp#L45) [main.cpp lines 49-101](/main.cpp#L49)

file: numbers.cpp
lines: if, else if, else(29-54)
[numbers.cpp lines 29-54](/numbers.cpp#L29)


My use of control flow is appropriate and "masterful" for these reasons:

main.cpp: My switch statement in lines 45-105 works with the c style array and for loop I used. 
While the for loop is checking to see if its hit the third array value, 
the switch statement makes it so the program can continue on to the next problem (or case in this instance)
once the user has answered and the answer has been checked. 
The if, else if, and else statements checks to see if the user put in the right answer. 
If the answer is correct it will cout "Correct", if not it will call upon the checkAttempts function and will log an attempt.

numbers.cpp: The if, else if, and else statements withing the checkAttempts() function take care of keeping track 
of the user attempts. Once the user has hit 3 attempts get set back to 0. 

#Iteration

file: main.cpp
lines: for(36-106), while(31-112)
[main.cpp lines 36-106](/main.cpp#L36) [main.cpp lines 31-112](/main.cpp#L31)

file: numbers.cpp
lines: while(72-77)
[numbers.cpp lines 72-77](/numbers.cpp#L72)

My use of iteration  is appropriate and "masterful" for these reasons:

main.cpp: The job of my for loop is to basically be the game and make sure that the arrays goes through the three number problem.
The while loops job is to make sure that the user types play. It also makes it so that once the for loop ends the program as a whole ends (breaks;).

numbers.cpp: the job of the while loop is to display all of the lines in the file. In short it displays the message when the user has answered all 3 questions correctly.

#Data Structure

file: main.cpp 
lines: c style array (36-106) defined in line 19
[main.cpp lines 36-106](/main.cpp#L36)

My use of data structure is appropriate and "masterful" for these reasons:

To hold the 3 problems i used a c style array. The array worked with the switch and for loop. The for loop made it so the array can run through its whole data set and the switch took care of showing the array values.

#Function

file: numbers.cpp
lines: (10-82)
[numbers.cpp lines 10-81](/numbers.cpp#L29)

My use of function is appropriate and "masterful" for these reasons:

The void function of displayMessage() displays the intro message to the player.
The non void and pass by value function checkAttempts() checks how many attempts the user has left
The void function of winner() displays the File that has the winners message when the user has answered all three problems correctly.


#File IO

file: numbers.cpp
lines: 61-81
[numbers.cpp lines 61-81](/numbers.cpp#L10)

My use of File IO is appropriate and "masterful" for these reasons:

It simply takes in a file opens it up and displays the messaage within the whole file and then closes it. 

#Class

file: numbers.h, functions in the class made in numbers.cpp and called upon in main.cpp
lines: the whole thing pretty much in numbers.h, main.cpp (23, 63, 82, 92,99,)
[numbers.cpp lines 29-54](/numbers.cpp#L29)

My use of class is appropriate and "masterful" for these reasons:

This requirement was hands down the bread and butter of the whole project. I put in all of my functions in the class to complete a lot of the requirements. This was a strategic decision for sure and thats why I feel that if you used this strategy it would definitely be considered masterful because you hit "multiple birds with one stone" so to speak. 




