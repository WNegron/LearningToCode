/* ************************************************************************************

Filename: ex04_37.cpp
    Date: 2021-12-17
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.37 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

	4.37 (Enforcing Privacy with Cryptography) The explosive growth of Internet communications and 
data storage on Internet-connected computers has greatly increased privacy concerns. The field of 
cryptography is concerned with coding data to make it difficult (and hopefully—with the most 
advanced schemes—impossible) for unauthorized users to read. In this exercise you’ll investigate a 
simple scheme for encrypting and decrypting data. A company that wants to send data over the 
Internet has asked you to write a program that will encrypt the data so that it may be transmitted 
more securely. All the data is transmitted as four-digit integers.

	Your application should read a four-digit integer entered by the user and encrypt it as follows: 

	Replace each digit with the result of adding 7 to the digit and getting the remainder after 
dividing the new value by 10. Then swap the first digit with the third, and swap the second digit 
with the fourth. Then print the encrypted integer. 

	Write a separate application that inputs an encrypted four-digit integer and decrypts it 
(by reversing the encryption scheme) to form the original number. 

  [Optional reading project: Research “public key cryptography” in general and the PGP (Pretty Good 
Privacy) specific public-key scheme. You may also want to investigate the RSA scheme, which is 
widely used in industrial-strength applications.]

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------
Initialize variable

prompt user for a four digit integer to encrypt
read integer

encrypt integer

display encrypted integer

-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

#include "Cryptography.h" //enables program to use Cryptography data types and functions

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
Cryptography myEncryption{0};
int number;

cout << "Enter a 4 digit integer to encrypt: ";
cin >> number;

myEncryption.encryptData(number);

myEncryption.displayEncryptedNumber();

cout << "Enter a 4 digit integer to decrypt: ";
cin >> number;

myEncryption.decryptData(number);

myEncryption.displayEncryptedNumber();

return 0; // indicate that program ended successfully
} // end of function main

