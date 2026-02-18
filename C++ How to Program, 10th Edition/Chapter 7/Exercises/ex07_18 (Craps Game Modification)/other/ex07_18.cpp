#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice();

int main() {
    // Random number generator seed
    srand(static_cast<unsigned int>(time(0)));

    // scoped enumeration with constants that represent the game status 
   enum class Status {CONTINUE, WON, LOST}; // all caps in constants

    const int TOTAL_GAMES = 1000;

    // Arrays: index 1 = first roll, index 2 = second roll, ..., index 20 = 20th roll
    // index 0 will be used for "after 20th roll" (or more precisely: 21st roll and beyond)
    int winsByRoll[21]  = {0};   // winsByRoll[1] = won on 1st roll, etc.
    int lossesByRoll[21] = {0};

    int totalWins = 0;
    int totalGamesWithPoint = 0;   // games that went to "point" phase
    long long totalRolls = 0;      // sum of all rolls across all games

    for (int game = 1; game <= TOTAL_GAMES; ++game) {
        unsigned int point = 0;
        int rollCount = 0;

        // First roll
        rollCount++;
        unsigned int sum = rollDice();

        Status gameStatus;

        if (sum == 7 || sum == 11) {
            gameStatus = Status::WON;
            winsByRoll[1]++;
            totalWins++;
        }
        else if (sum == 2 || sum == 3 || sum == 12) {
            gameStatus = Status::LOST;
            lossesByRoll[1]++;
        }
        else {
            // Point phase begins
            totalGamesWithPoint++;
            point = sum;
            gameStatus = Status::CONTINUE;

            // Keep rolling until we win or lose
            while (gameStatus == Status::CONTINUE) {
                rollCount++;
                sum = rollDice();

                if (sum == point) {
                    gameStatus = Status::WON;
                    totalWins++;

                    if (rollCount <= 20) {
                        winsByRoll[rollCount]++;
                    } else {
                        winsByRoll[0]++;
                    }
                }
                else if (sum == 7) {
                    gameStatus = Status::LOST;

                    if (rollCount <= 20) {
                        lossesByRoll[rollCount]++;
                    } else {
                        lossesByRoll[0]++;
                    }
                }
            }
        }

        totalRolls += rollCount;
    }

    // ────────────────────────────────────────────────
    // Output results
    // ────────────────────────────────────────────────

    cout << "\nResults after " << TOTAL_GAMES << " games of craps\n";
    cout << string(50, '-') << "\n";

    cout << "\nWins by roll number:\n";
    for (int i = 1; i <= 20; ++i) {
        cout << "Roll " << setw(2) << i << ": " << winsByRoll[i] << " wins\n";
    }
    cout << "After 20th roll: " << winsByRoll[0] << " wins\n";

    cout << "\nLosses by roll number:\n";
    for (int i = 1; i <= 20; ++i) {
        cout << "Roll " << setw(2) << i << ": " << lossesByRoll[i] << " losses\n";
    }
    cout << "After 20th roll: " << lossesByRoll[0] << " losses\n";

    cout << "\nSummary:\n";
    cout << "Total wins:           " << totalWins << " (" 
         << fixed << setprecision(2) 
         << (totalWins * 100.0 / TOTAL_GAMES) << "%)\n";
    cout << "Total losses:         " << (TOTAL_GAMES - totalWins) << "\n";
    cout << "Probability of winning: " 
         << (totalWins * 100.0 / TOTAL_GAMES) << "%\n";
    cout << "Average length of game: " 
         << fixed << setprecision(2) 
         << (static_cast<double>(totalRolls) / TOTAL_GAMES) << " rolls\n";

    cout << "\nGames that reached the point phase: " 
         << totalGamesWithPoint << " (" 
         << (totalGamesWithPoint * 100.0 / TOTAL_GAMES) << "%)\n";

    return 0;
}

// same rollDice function (without printing — we don't need screen spam)
unsigned int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    return die1 + die2;
}