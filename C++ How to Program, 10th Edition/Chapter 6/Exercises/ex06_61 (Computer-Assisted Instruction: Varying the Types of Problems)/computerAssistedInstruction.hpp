/***************************************************************************************************

File Name: computerAssisstedInstructions.hpp
     Date: 2026-02-14
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.61 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.60 (Computer-Assisted Instruction: Difficulty Levels) Exercises 6.57–6.59 developed a 
computer-assisted instruction program to help teach an elementary-school student multiplication. Modify 
the program to allow the user to enter a difficulty level. At a difficulty level of 1, the program
should use only single-digit numbers in the problems; at a difficulty level of 2, numbers as large as
two digits, and so on.

    6.59 (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated
computer-assisted instruction systems monitor the student’s performance over a period of time. The
decision to begin a new topic is often based on the student’s success with previous topics. Modify
the program of Exercise 6.58 to count the number of correct and incorrect responses typed by the
student. After the student types 10 answers, your program should calculate the percentage that are
correct. If the percentage is lower than 75%, display "Please ask your teacher for extra help.",
then reset the program so another student can try it. If the percentage is 75% or higher, display
"Congratulations, you are ready to go to the next level!", then reset the program so another
student can try it.

    6.58 (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in CAI environments is 
student fatigue. This can be reduced by varying the computer’s responses to hold the student’s attention. 
Modify the program of Exercise 6.57 so that various comments are displayed for each answer as follows:

    Possible responses to a correct answer:
        Very good!
        Excellent!
        Nice work!
        Keep up the good work!
    
    Possible responses to an incorrect answer:
        No. Please try again.
        Wrong. Try once more.
        Don't give up!
        No. Keep trying.

Use random-number generation to choose a number from 1 to 4 that will be used to select
one of the four appropriate responses to each correct or incorrect answer. Use a switch statement to
issue the responses.

    6.57 (Computer-Assisted Instruction) The use of computers in education is referred to as computer-assisted 
instruction (CAI). Write a program that will help an elementary-school student learn multiplication. 
Use the rand function to produce two positive one-digit integers. The program should then prompt the 
user with a question, such as

    How much is 6 times 7?

The student then inputs the answer. Next, the program checks the student’s answer. If it’s correct,
display the message "Very good!" and ask another multiplication question. If the answer is wrong,
display the message "No. Please try again." and let the student try the same question repeatedly
until the student finally gets it right. A separate function should be used to generate each new 
question. This function should be called once when the application begins execution and each time 
the user answers the question correctly.

-------------------------------------    Pseudocode    ---------------------------------------------
PROGRAM ComputerAssistedMultiplicationTutor

    // Global or accessible random number generator is assumed to be seeded 
    // (equivalent to srand(time(NULL)) in main)

    // ────────────────────────────────────────────────
    // FUNCTION: Displays random encouraging / corrective message
    // Displays a random encouraging message when the answer is correct
    // ────────────────────────────────────────────────
    FUNCTION correctMessage()
        //
        DECLARE string correctMessages[4] ← {
            "Very good!",
            "Excellent!",
            "Nice work!",
            "Keep up the good work!"
        }
        index ← random integer from 0 to 3
        DISPLAY correctMessages[index]
    END FUNCTION

    // ────────────────────────────────────────────────
    // FUNCTION: Displays random encouraging / corrective message
    // Displays a random encouraging message when the answer is incorrect
    // ────────────────────────────────────────────────
    FUNCTION incorrectMessage()
        DECLARE string incorrectMessages[4] ← {
            "No. Please try again.",
            "Wrong. Try once more.",
            "Don't give up!",
            "No. Keep trying."
        }
        index ← random integer from 0 to 3
        DISPLAY incorrectMessages[index]
    END FUNCTION

    // ────────────────────────────────────────────────
    // FUNCTION: Returns random digit 1–9
    // ────────────────────────────────────────────────
    FUNCTION getRandomDigit(difficulty) RETURNS integer
        IF difficulty < 1 THEN
            SET difficulty ← 1
        END-IF
        
        SET maxValue ← 10^difficulty     // 10, 100, 1000, ...
        
        RETURN random integer in range [1 ... maxValue-1
    END FUNCTION

    // ────────────────────────────────────────────────
    // FUNCTION: Prints question and returns correct product
    // ────────────────────────────────────────────────
    FUNCTION generateNewQuestion(difficulty) RETURNS integer
        DECLARE integer x ← getRandomDigit(difficulty)
        DECLARE integer y ← getRandomDigit(difficulty)
        DISPLAY "How much is ", x, " times ", y, " (enter -1 to exit)? "
        RETURN x * y
    END FUNCTION

    // ────────────────────────────────────────────────
    // FUNCTION: multiplication tutor loop
    // ────────────────────────────────────────────────
    FUNCTION runMultiplicationSession()
        DECLARE correctCount ← 0
        DECLARE totalAnswers ← 0
        DECLARE correctAnswer ← 0
        DECLARE studentAnswer ← 0

        Display header:
        Output separator line
        Output "  ++====********    LEARN MULTIPLICATION    ********====++"
        Output "              Difficulty level: " + difficulty
        Output separator line
        Output blank line

        SET correctAnswer ← generateNewQuestion(difficulty)

        WHILE totalAnswers < 10 DO
            READ studentAnswer

            IF input failed (not a number) THEN
                Clear input error
                Ignore rest of line
                Display "Please enter a number (or -1 to quit): "
                CONTINUE to next loop iteration
            END-IF

            IF studentAnswer = -1 THEN
                Display "Goodbye! Come back soon!"
                EXIT procedure (end session)
            END-IF

            INCREMENT totalAnswers

            IF studentAnswer = correctAnswer THEN
                INCREMENT correctCount
                CALL correctMessage()        // random positive message
            ELSE
                CALL incorrectMessage()      // random try again message
            END-IF

            // ───────────────────────────────────────
            // Evaluation point: exactly 10 answers
            // ───────────────────────────────────────
            // Special point: after exactly 10 answers
            IF totalAnswers = 10 THEN
                CALCULATE percentage ← (correctCount * 100) / totalAnswers

                Display "You answered " + totalAnswers + " questions."
                Display "Correct answers: " + correctCount + " (" + percentage + "%)"
                Display blank line

                IF percentage ≥ 75 THEN
                    Display "Congratulations, you are ready to go to the next level!"
                ELSE
                    Display "Please ask your teacher for extra help."
                END-IF

                Display separator line
                Display "       Starting new student"
                Display separator line
                Display blank line

                // ───────────────────────────────
                // Ask for new difficulty level
                // ───────────────────────────────
                Output "Choose difficulty level (1 = easiest, 2 = medium, 3 = harder, ...): "
                READ difficulty
            
                WHILE input invalid OR difficulty < 1 DO
                    Clear input error state
                    Discard rest of line
                    Output "Please enter a positive number (1 or higher): "
                    READ difficulty
                END-WHILE

                Output blank line
                Output "Starting training at difficulty level " + difficulty + "..."

                // Reset for new student / new session
                SET correctCount ← 0
                SET totalAnswers ← 0
                SET correctAnswer ← generateNewQuestion()

                CONTINUE   // go back to beginning of while loop for new set
            END-IF

            // Normal flow: next question
            SET correctAnswer ← generateNewQuestion()

        END-WHILE
    END FUNCTION

    // ────────────────────────────────────────────────
    // PROGRAM ENTRY POINT
    // ────────────────────────────────────────────────
    MAIN
        INITIALIZE random number generator (using current time)

        Output "Welcome to Multiplication Trainer!"
        Output "(Enter -1 at any time to exit)"

        Output "Choose difficulty level (1 = easiest, 2 = medium, 3 = harder, ...): "
        READ difficulty
        
        WHILE input invalid OR difficulty < 1 DO
            Clear input error state
            Discard rest of line
            Output "Please enter a positive number (1 or higher): "
            READ difficulty
        END-WHILE

        Output blank line
        Output "Starting training at difficulty level " + difficulty + "..."
        CALL multiplication()
    END MAIN

END PROGRAM

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <cstdlib> // contains prototypes for functions srand and rand
#include <string> // enable program to use C++ string data type
#include <ctime>//enable program to perform time functions
#include <limits>    // numeric_limits

//function definitions
//correctMessage function; will display a message after every answer from the student 
void correctMessage(){
    // declaring and initializing variables
    std::string correctMessage[] = {
            "Very good!",
            "Excellent!",
            "Nice work!",
            "Keep up the good work!"
        };
    //pick message at random
    //printouts message
    std::cout << correctMessage[rand()%4] << std::endl;
}//end correctMessage function

//incorrectMessage function; will display a message after every answer from the student 
void incorrectMessage(){
    // declaring and initializing variables
    std::string incorrectMessage[] = {
            "No. Please try again.",
            "Wrong. Try once more.",
            "Don't give up!",
            "No. Keep trying."
        };
    //pick message at random
    //printouts message
    std::cout << incorrectMessage[rand()%4] << std::endl;
}//end incorrectMessage function

// ────────────────────────────────────────────────
//  Generate random number with max digits controlled by difficulty
//  difficulty 1 → 1–9
//  difficulty 2 → 1–99
//  difficulty 3 → 1–999
//  etc.
// ────────────────────────────────────────────────
//begin getRandomDigit
int getRandomDigit(int difficulty){
    if (difficulty < 1) difficulty = 1;
    int maxValue = 1;
    for (int i = 0; i < difficulty; ++i) {
        maxValue *= 10;
    }
    ////generate a random number based on difficulty level
    // 1 to (10^difficulty - 1)
    return (rand() % maxValue - 1) + 1;
}//end getRandomDigit function

int generateNewQuestion(int difficulty){
    // declaring and initializing variables
    int x = getRandomDigit(difficulty);//generate a random number between 1 and 9
    int y = getRandomDigit(difficulty);//generate a random number between 1 and 9

    std::cout << "How much is " << x << " times " << y << " (enter -1 to exit)? ";//promt student for the answer
   return x * y;
}//end generateNewQuestion function

//multiplication
void runMultiplicationSession(int difficulty){
    // declaring and initializing variables
    int correctAnswer = 0;
    int studentAnswer = 0;
    int correctCount  = 0;
    int totalAnswers  = 0;

    std::cout << "-------------------------------------------------------------\n";
    std::cout << "  ++====********    LEARN MULTIPLICATION    ********====++\n";
    std::cout << "              Difficulty level: " << difficulty << "\n";
    std::cout << "-------------------------------------------------------------\n" << std::endl;

    correctAnswer = generateNewQuestion(difficulty);//use to compare and check student's answers

    //while loop
    //it loops forever; to break loop student must enter -1
    while (totalAnswers < 10){
        //reads and validates student's answer
        if (!(std::cin >> studentAnswer)) {
            // Handle bad input (letters, etc.)
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Please enter a number (or -1 to quit): ";
            continue;
        }//end if

        //terminates loop when student enters -1
        if (studentAnswer == -1) {
            std::cout << "Goodbye! Come back soon!\n";
            break;  // exit session (and program)
        }//end if

        totalAnswers++;

        //check student's answers to see if it's correct
        if(studentAnswer == correctAnswer){
            correctCount++;
            correctMessage();//will display a message after every answer from the student 
            //correctAnswer = generateNewQuestion();//use to compare and check student's answers
        }//end if
        else if(studentAnswer != -1){
            incorrectMessage();//will display a message after every answer from the student
            //new question is not generated yet; let's them try again  
        }//end else

        // After 10 answers → evaluate and reset
        if (totalAnswers == 10) {
            int percentage = (correctCount * 100) / totalAnswers;

            std::cout << "\nYou answered " << totalAnswers << " questions.\n";
            std::cout << "Correct answers: " << correctCount << " (" << percentage << "%)\n\n";

            if (percentage >= 75) {
                std::cout << "Congratulations, you are ready to go to the next level!\n";
            } else {
                std::cout << "Please ask your teacher for extra help.\n";
            }//end if...else

            std::cout << "\n───────────────────────────────\n";
            std::cout << "       Starting new student\n";
            std::cout << "───────────────────────────────\n\n";

            //get new difficulty level
            std::cout << "Choose difficulty level (1 = easiest, 2 = medium, 3 = harder, ...): ";
            //reads and validates student's choice
            while (!(std::cin >> difficulty) || difficulty < 1) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please enter a positive number (1 or higher): ";
            }//end while

            //new difficulty
            std::cout << "\nStarting training at difficulty level " << difficulty << "...\n";

            // Reset counters and start fresh session
            correctCount = 0;
            totalAnswers = 0;

                std::cout << "-------------------------------------------------------------\n";
                std::cout << "  ++====********    LEARN MULTIPLICATION    ********====++\n";
                std::cout << "              Difficulty level: " << difficulty << "\n";
                std::cout << "-------------------------------------------------------------\n" << std::endl;

            correctAnswer = generateNewQuestion(difficulty);
            continue;
        }//end if

        // Next question
        correctAnswer = generateNewQuestion(difficulty);//use to compare and check student's answers
    }//end while loop
}//end multiplication function
