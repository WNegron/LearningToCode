#include <iostream>
#include <cstdlib>     // rand(), srand()
#include <ctime>       // time()
#include <iomanip>     // setprecision
using namespace std;

int getRandomResponse() {
    return rand() % 4 + 1;
}

void printCorrectResponse() {
    switch (getRandomResponse()) {
        case 1: cout << "Very good!\n"; break;
        case 2: cout << "Excellent!\n"; break;
        case 3: cout << "Nice work!\n"; break;
        case 4: cout << "Keep up the good work!\n"; break;
    }
}

void printIncorrectResponse() {
    switch (getRandomResponse()) {
        case 1: cout << "No. Please try again.\n"; break;
        case 2: cout << "Wrong. Try once more.\n"; break;
        case 3: cout << "Don't give up!\n"; break;
        case 4: cout << "No. Keep trying.\n"; break;
    }
}

// Generate two numbers based on difficulty level
void generateNumbers(int level, int& num1, int& num2) {
    int maxValue = 1;
    for (int i = 0; i < level; ++i) maxValue *= 10;
    maxValue -= 1;  // 9, 99, 999, ...

    num1 = rand() % maxValue + 1;
    num2 = rand() % maxValue + 1;
}

// Generate a complete problem (returns operation char and correct answer)
void generateQuestion(int problemType, int difficulty, 
                      int& num1, int& num2, char& operation, int& correct) {
    generateNumbers(difficulty, num1, num2);

    // For division: make sure num1 is divisible by num2
    if (problemType == 4) {
        num2 = rand() % (max(1, num1/2)) + 1;  // avoid 0 and too large divisor
        num1 = num2 * (rand() % 9 + 1);        // ensure integer result
    }

    switch (problemType) {
        case 1:  // Addition
            operation = '+';
            correct = num1 + num2;
            break;
        case 2:  // Subtraction (avoid negative results)
            operation = '-';
            if (num1 < num2) swap(num1, num2);
            correct = num1 - num2;
            break;
        case 3:  // Multiplication
            operation = 'x';
            correct = num1 * num2;
            break;
        case 4:  // Division
            operation = '/';
            correct = num1 / num2;   // already ensured integer
            break;
        default:
            operation = '?';
            correct = 0;
    }

    cout << "\nHow much is " << num1 << " " << operation << " " << num2 << " ?  ";
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int difficulty, problemType;

        cout << "\n=== Arithmetic Practice ===\n\n";

        cout << "Choose difficulty level (1–5 recommended):\n";
        cout << "  1 = single-digit    2 = two-digit    3 = three-digit\n";
        cout << "Enter level: ";
        cin >> difficulty;
        if (difficulty < 1) difficulty = 1;
        if (difficulty > 6) difficulty = 6;

        cout << "\nChoose problem type:\n";
        cout << "  1 = Addition only\n";
        cout << "  2 = Subtraction only\n";
        cout << "  3 = Multiplication only\n";
        cout << "  4 = Division only\n";
        cout << "  5 = Random mixture of all types\n";
        cout << "Enter type (1–5): ";
        cin >> problemType;

        if (problemType < 1 || problemType > 5) problemType = 5;

        int correctCount   = 0;
        int totalResponses = 0;

        int a, b, correctAnswer;
        char op;
        int userAnswer;

        cout << "\n--- Starting session (" << difficulty << "-digit, type " 
             << problemType << ") ---\n";
        cout << "          10 questions\n";
        cout << "-----------------------------\n";

        // First question
        int currentType = (problemType == 5) ? (rand() % 4 + 1) : problemType;
        generateQuestion(currentType, difficulty, a, b, op, correctAnswer);

        while (totalResponses < 10) {
            cout << "→ ";
            cin >> userAnswer;
            totalResponses++;

            bool isCorrect = (userAnswer == correctAnswer);

            if (isCorrect) {
                correctCount++;
                printCorrectResponse();
            } else {
                printIncorrectResponse();
            }

            if (totalResponses < 10) {
                // Decide next problem type
                currentType = (problemType == 5) ? (rand() % 4 + 1) : problemType;
                generateQuestion(currentType, difficulty, a, b, op, correctAnswer);
            }
        }

        // Summary
        cout << "\n=============================\n";
        cout << "Session complete!\n";
        cout << "Correct answers   : " << correctCount << "/10\n";

        double percentage = (static_cast<double>(correctCount) / 10.0) * 100.0;
        cout << fixed << setprecision(1);
        cout << "Percentage correct: " << percentage << "%\n\n";

        if (percentage < 75.0) {
            cout << "Please ask your teacher for extra help.\n";
        } else {
            cout << "Congratulations, you are ready to go to the next level!\n";
        }

        cout << "\nStart another session? (y/n): ";
        cin >> playAgain;
        cin.ignore(1000, '\n');
    }

    cout << "\nThanks for practicing! Goodbye.\n";
    return 0;
}