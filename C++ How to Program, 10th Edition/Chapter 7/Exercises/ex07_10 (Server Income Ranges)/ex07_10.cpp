/***************************************************************************************************

File Name: ex07_10.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.10 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.10 (Server Income Ranges) Use a one-dimensional array to solve the following problem. Servers earn 
a combination of hourly wages and tips. Write a program (using an array of counters) that determines how 
many of the servers earned salaries in each of the following ranges (assume that each server’s salary is 
truncated to an integer amount).

        a) 20–29

        b) 30–39

        c) 40–49

        d) 50–59

        e) 60–69

        f) 70–79

        g) 80–89

        h) 90–99

        i) 100 and over

For simplicity assume that all servers are paid at the same basic rate (given once by the user). To calculate
each server’s salary, you will need to get both the number of hours worked and the total amount received
in tips from the user. Also, ask the user to enter the currency to make the program more universal.

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
#include <algorithm> // contains sort and binary_search
#include <string> // enable program to use C++ string data type
#include <iomanip>//parameterized stream manipulators

//developer define header files
//#include "headerFileName.hpp"//enable program to use function from headerFileNames

//using directives; enables a program to use all the names in any standard C++ header
using namespace std;//program uses names from namespace std
using namespace std::chrono_literals;   // lets you write 2s, 1500ms, etc.

// function main begins program execution
int main(){

    cout << "\n\n\n";
    
    // declaring and initializing variables
    string currency; // Currency symbol (e.g., "$", "€", "£")
    cout << "Enter currency symbol: ";
    cin >> currency;

    double hourlyRate; // basic pay rate for all servers
    cout << "Enter hourly rate: ";
    cin >> hourlyRate;

    int numServers;//number of servers
    cout << "How many servers? ";
    cin >> numServers;

    //constant variable, use to specify the size of the array
    //variable's value cannot be change by program
    const int arraySize = 9;
    
    // Array of counters for each range
    //index 0 - 20-29, 1 - 30-39, 2 - 40-49, 3 - 50-59, 4 - 60-69, 5 - 70-79, 6 - 80-89, 
    //7 - 90-99, 8 - 100 and over
    array<int,arraySize> counters = {}; // all elements = 0

    double hours = 0; // hours worked; this value will be enter by user
    double tips = 0; // total amount tips recieved ; this value will be enter by user

    cout << fixed << setprecision(2);  // nice money formatting

    cout << "\nEnter data for each server:\n";
    cout << "--------------------------------\n";

    for(int i=1; i <= numServers; i++){

        cout << "Server #" << i << ":\n";
        cout << "Hours Worked: ";
        cin >> hours;

        cout << " Tips recieved: " << currency;
        cin >> tips;

        // Calculate salary (truncate to integer)
        int salary = static_cast<int>(hours * hourlyRate + tips);


        // Determine which range this salary falls into
        int index;
        if (salary >= 100) {
            index = 8;           // 8 - i) 100 and over
        } else if (salary >= 90) {
            index = 7;           // 7 - h) 90-99
        } else if (salary >= 80) { 
            index = 6;           // 6 - g) 80-89
        } else if (salary >= 70) {  
            index = 5;           // 5 - f) 70-79
        } else if (salary >= 60) { 
            index = 4;           // 4 - e) 60-69
        } else if (salary >= 50) {
            index = 3;           // 3 - d) 50-59
        } else if (salary >= 40) { 
            index = 2;           // 2 - c) 40-49
        } else if (salary >= 30) { 
            index = 1;           // 1 - b) 30-39
        } else if (salary >= 20) { //index 0 - a) 20-29
            index = 0;
        } else {
            // Salaries below 20 are ignored (not in any range)
            index = -1;
            cout << "  (Salary " << salary << " is below lowest range — ignored)\n";
        }

        if (index >= 0) {
            counters[index]++;// increase tally based on the index
        }

        // display calculated salary for each server
        cout << "  Calculated salary: " << currency << salary << "\n\n";
    }//end for loop for servers

    // ────────────────────────────────────────────────
    // Display results in a neat table

    cout << "\nSalary Distribution:\n";
    cout << "─────────────────────\n";

    const string ranges[arraySize] = {
        " 20-29", " 30-39", " 40-49", " 50-59",
        " 60-69", " 70-79", " 80-89", " 90-99",
        "100 and over"
    };

    cout << left << setw(14) << "Range" << "Number of servers\n";
    cout << "──────────────────────────────\n";

    for (int i = 0; i < arraySize; ++i) {
        cout << setw(14) << (currency + ranges[i]) 
             << setw(6) << right << counters[i] << "\n";
    }

    // Optional: total servers accounted for (excluding <20)
    int totalCounted = 0;
    for (int count : counters) totalCounted += count;

    cout << "\nTotal servers in ranges: " << totalCounted 
         << " out of " << numServers << "\n";

    return 0;// indicate that program ended successfully
}// end of main function
