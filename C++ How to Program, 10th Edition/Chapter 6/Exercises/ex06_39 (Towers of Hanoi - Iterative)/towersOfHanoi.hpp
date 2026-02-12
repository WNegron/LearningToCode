/***************************************************************************************************

File Name: towersOfHanoi.hpp
     Date: 2026-02-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.39 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    ++====********  Exercise 6.39  ********====++
    6.39 (Towers of Hanoi: Iterative Version) Any program that can be implemented recursively can
be implemented iteratively, although sometimes with more difficulty and less clarity. Try writing
an iterative version of the Towers of Hanoi. If you succeed, compare your iterative version with the
recursive version developed in Exercise 6.38. Investigate issues of performance, clarity and your abil-
ity to demonstrate the correctness of the programs.

    ++====********  *************  ********====++

    6.38 (Towers of Hanoi) In this chapter, you studied functions that can be easily implemented
both recursively and iteratively. In this exercise, we present a problem whose recursive solution 
demonstrates the elegance of recursion, and whose iterative solution may not be as apparent.
The Towers of Hanoi is one of the most famous classic problems every budding computer
scientist must grapple with. Legend has it that in a temple in the Far East, priests are attempting to
move a stack of golden disks from one diamond peg to another (Fig. 6.31). The initial stack has 64
disks threaded onto one peg and arranged from bottom to top by decreasing size. The priests are
attempting to move the stack from one peg to another under the constraints that exactly one disk is
moved at a time and at no time may a larger disk be placed above a smaller disk. Three pegs are
provided, one being used for temporarily holding disks. Supposedly, the world will end when the
priests complete their task, so there is little incentive for us to facilitate their efforts.

Let’s assume that the priests are attempting to move the disks from peg 1 to peg 3. We wish to
develop an algorithm that prints the precise sequence of peg-to-peg disk transfers.
If we were to approach this problem with conventional methods, we would rapidly find ourselves 
hopelessly knotted up in managing the disks. Instead, attacking this problem with recursion
in mind allows the steps to be simple. Moving n disks can be viewed in terms of moving only n–1 disks
(hence, the recursion), as follows:

    a) Move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.
    b) Move the last disk (the largest) from peg 1 to peg 3.
    c) Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area.

The process ends when the last task involves moving n = 1 disk (i.e., the base case). This task
is accomplished by simply moving the disk, without the need for a temporary holding area. Write a
program to solve the Towers of Hanoi problem. Use a recursive function with four parameters:

    a) The number of disks to be moved
    b) The peg on which these disks are initially threaded
    c) The peg to which this stack of disks is to be moved
    d) The peg to be used as a temporary holding area

Display the precise instructions for moving the disks from the starting peg to the destination
peg. To move a stack of three disks from peg 1 to peg 3, the program displays the following moves:

    1 → 3 (This means move one disk from peg 1 to peg 3.)
    1 → 2
    3 → 2
    1 → 3
    2 → 1
    2 → 3
    1 → 3

-------------------------------------    Pseudocode    ---------------------------------------------

function towerOfHanoi numberOfDisk, fromPeg, auxPeg, destinationPeg, 

    if numberOfDisk = 1 then
        display fromPeg to destinationPeg

    else
        a) Move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.
        b) Move the last disk (the largest) from peg 1 to peg 3.
        c) Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area.

        towerOfHanoi(numberOfDisk - 1, fromPeg, destinationPeg, auxPeg);
        display fromPeg to auxPeg
        towerOfHanoi(numberOfDisk - 1), auxPeg, formPeg, destinationPeg);

end function

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <cmath>//enable program to perform math functions


//recursive solution for Towers of Hanoi
// towersOfHanoi function begins
void towersOfHanoi(int numberOfDisk, int fromPeg, int auxPeg, int destinationPeg){
    if(numberOfDisk == 1){
        std::cout << fromPeg << " --> " << destinationPeg << std::endl;
    }//end if

    else{
        
        //a) Move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.
        towersOfHanoi(numberOfDisk - 1, fromPeg, destinationPeg,auxPeg);

        //b) Move the last disk (the largest) from peg 1 to peg 3.
        std::cout << fromPeg << " --> " << destinationPeg << std::endl;

        //c) Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area.
        towersOfHanoi(numberOfDisk - 1, auxPeg, fromPeg, destinationPeg);
    }
}//end function

// still not solved. this iterative version does must of the step correctley
// for the 3 disk problem it prints the wrong move for steps 3 and 5
// for the 4 disk promblem it prints the wrong move for steps 3, 5, 9, 10, 11, and 12
//iterative solution for Towers of Hanoi
void iterativeTowersOfHanoi(int disk, int source, int aux, int destination){
    //variable declaration and definition
    int from, to, temp;

    // 2^n - 1; gives us the amount of moves it will take to solve hte towers
    int total_Moves = static_cast<int>(pow(2,disk)-1); 

    // if number of disks is even, swap auxiliary and destination
    // this ensures the smallest disk cycles in the correct direction
    if(disk % 2 == 0){
        aux = 3;
        destination = 2;
    }//end if

    for (int i = 1; i <= total_Moves; i++){  
        
    
        if (i % 3 == 0){// i % 3 == 0
            from = aux;
            to = destination;
        }//end if
        else if(i % 3 == 1){
            from = source;
            to = destination;
        }//end if
        else{ //if(i % 3 == 2){
            from = source;
            to = aux;
        }//end if

        std::cout << from << " --> " << to << std::endl;

    }//end for loop
}//end iterativeTowersOfHanoi

//groks versions

/* void iterativeTowersOfHanoi(int n, int source, int auxiliary, int destination) {
    if (n == 0) return;

    // Changed from bit shift to pow (as requested)
    int total_moves = static_cast<int>(pow(2, n) - 1);

    // If number of disks is even, swap auxiliary and destination
    // This ensures the smallest disk cycles in the correct direction
   // Decide direction of smallest disk movement
    int temp = auxiliary;
    if (n % 2 == 0) {
        auxiliary = destination;
        destination = temp;           // now auxiliary = original dest, destination = original aux
    }

    for (int i = 1; i <= total_moves; ++i) {
        int from, to;

        if (i % 3 == 1) {
            from = source;
            to   = destination;
        }
        else if (i % 3 == 2) {
            from = source;
            to   = auxiliary;
        }
        else {  // i % 3 == 0
            from = auxiliary;
            to   = destination;
        }

        std::cout << from << " --> " << to << std::endl;
    }
} 


void iterativeTowersOfHanoi(int n, int source, int auxiliary, int destination) {
    if (n == 0) return;

    int total_moves = static_cast<int>(std::pow(2, n) - 1);

    // Direction: 1 = clockwise (odd n), -1 = counterclockwise (even n)
    int dir = (n % 2 == 0) ? -1 : 1;

    // Peg order: let's number them 0,1,2 internally for modulo arithmetic
    int pegs[3] = {source, auxiliary, destination};

    for (int i = 1; i <= total_moves; ++i) {
        int move_type = (i % 3);
        int from, to;

        if (move_type == 1) {
            from = pegs[0];
            to   = pegs[dir == 1 ? 2 : 1];
        } else if (move_type == 2) {
            from = pegs[0];
            to   = pegs[dir == 1 ? 1 : 2];
        } else {
            from = pegs[dir == 1 ? 1 : 2];
            to   = pegs[2];
        }

        std::cout << from << " --> " << to << std::endl;
    }
}*/

