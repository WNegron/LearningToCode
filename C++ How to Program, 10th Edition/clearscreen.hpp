/***************************************************************************************************

File Name: clearScreen.hpp
     Date: 2026-02-15
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
    These functions are simply to clear the screen and pause it.
Description:

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/
#include <iostream> // enable program to perform input/output
#include <thread>  //  for sleep_for
#include <chrono>  //  for seconds, milliseconds, etc.

using namespace std::chrono_literals;   // lets you write 2s, 1500ms, etc.

//clearScreen Function difinition
void clearScreen() {
    // clears screen
    // moves cursor to top-left (1,1)
    std::cout << "\033[2J\033[H";   // or "\x1B[2J\x1B[H"
}//end clearScreen function

void countdownClean() {
    std::cout << "Next question in   ";   // reserve space
    
    for (int i = 3; i >= 1; --i) {
        std::cout << "\rNext question in " << i << "... " << std::flush;
        std::this_thread::sleep_for(1s);
    }
    
    std::cout << "\rNext question in Go!      \n\n";
}

void countdownSpinner() {
    const char spinner[] = {'|', '/', '-', '\\'};
    int spinIdx = 0;

    std::cout << "Preparing next question ";
    
    for (int i = 3; i >= 0; --i) {
        std::cout << "\rPreparing next question " << spinner[spinIdx % 4] 
                  << "  " << i << "s  " << std::flush;
        spinIdx++;
        std::this_thread::sleep_for(1s);
    }
    
    std::cout << "\rPreparing next question Done!          \n\n";
}

//dotsCountdown function definition
void dotsCountdown() {
    std::cout << "\n\nLoading";
    
    for (int i = 0; i < 9; ++i) {           // 3 seconds total
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(333ms);
    }
    
    std::cout << "\rLoading Completed\n\n";   // clear line
    std::this_thread::sleep_for(1s);

    clearScreen();
}//end dotsCountdown function

/*// ────────────────────────────────────────────────
    // ← Add delay here – most users like 1–3 seconds
    // ────────────────────────────────────────────────
    std::cout << "\nNext question in...\n";
    std::this_thread::sleep_for(2s);          // 2 seconds pause
    // or: std::this_thread::sleep_for(std::chrono::seconds(2));
    // or shorter: std::this_thread::sleep_for(1200ms);

void countdownGo() {
    std::cout << "Next question in ";
    for (int i = 3; i >= 1; --i) {
        std::cout << i << "... " << std::flush;     // flush forces immediate display
        std::this_thread::sleep_for(1s);
        std::cout << "\b\b\b\b    \b\b\b\b";       // erase "3... ", "2... ", etc.
    }
    std::cout << "Go!\n\n";
}

void countdownClean() {
    std::cout << "Next question in   ";   // reserve space
    
    for (int i = 3; i >= 1; --i) {
        std::cout << "\rNext question in " << i << "... " << std::flush;
        std::this_thread::sleep_for(1s);
    }
    
    std::cout << "\rNext question in Go!      \n\n";
}

void countdownSpinner() {
    const char spinner[] = {'|', '/', '-', '\\'};
    int spinIdx = 0;

    std::cout << "Preparing next question ";
    
    for (int i = 3; i >= 0; --i) {
        std::cout << "\rPreparing next question " << spinner[spinIdx % 4] 
                  << "  " << i << "s  " << std::flush;
        spinIdx++;
        std::this_thread::sleep_for(1s);
    }
    
    std::cout << "\rPreparing next question Done!          \n\n";
}

void dotsCountdown() {
    std::cout << "Next question ";
    
    for (int i = 0; i < 9; ++i) {           // 3 seconds total
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(333ms);
    }
    
    std::cout << "\rNext question     \n\n";   // clear line
    std::cout << "Here we go!\n";
}

void dramaticCountdown() {
    clearScreen();
    std::cout << "\n\n\n\n\n";  // center vertically a bit
    
    for (int i = 3; i >= 1; --i) {
        clearScreen();
        std::cout << "\n\n\n\n          " << i << "\n\n\n\n" << std::flush;
        std::this_thread::sleep_for(1s);
    }
    
    clearScreen();
    std::cout << "\n\n\n\n          GO!\n\n\n\n" << std::flush;
    std::this_thread::sleep_for(700ms);
}*/