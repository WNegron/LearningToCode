/* ************************************************************************************

Filename: Cryptography.h
    Date: 2021-12-17
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.37 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.37 (Enforcing Privacy with Cryptography) The explosive growth of Internet communications and data 
storage on Internet-connected computers has greatly increased privacy concerns. The field of 
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

#include <iostream>//enables program to perform input and output

class Cryptography{// class definition

private:
/******************           Data Members           ***********************/
int numberToEncrypt;
int encryptedDigit0 = 0;
int encryptedDigit1 = 0;
int encryptedDigit2 = 0;
int encryptedDigit3 = 0;
int encryptedNumber = 0;
	

public:
/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
//C++11 List Initializer
// constructor initializes data member name with parameter accountName
explicit Cryptography(int dataNumber)
: numberToEncrypt{dataNumber} { // member initializer
// empty body
}

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
void setNumberToEncrypt(int dataNumber){
	numberToEncrypt = dataNumber;
}//end setNumber

void setDigit0(int digit){
	encryptedDigit0 = digit;
}//end setDigit0

void setDigit1(int digit){
	encryptedDigit1 = digit;
}//end setDigit1

void setDigit2(int digit){
	encryptedDigit2 = digit;
}//end setDigit2

void setDigit3(int digit){
	encryptedDigit3 = digit;
}//end setDigit3

void setEncryptedNumber(int encryptNumber){
	encryptedNumber = encryptNumber;
}
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value

int getNumberToEncrypt(){
	return numberToEncrypt;
}//end getNumberToEncrypt

int getDigit0(){
	return encryptedDigit0;
}//end getDigit0

int getDigit1(){
	return encryptedDigit1;
}//end getDigit1

int getDigit2(){
	return encryptedDigit2;
}//end getDigit2

int getDigit3(){
	return encryptedDigit3;
}//end getDigit3

int getEncryptedNumber(){
	return encryptedNumber;
}
	

/**************************  Other Member Functions *******************************/
void separateDigits(int digitsToSeparate){
	setDigit0(digitsToSeparate / 1000);
	
	digitsToSeparate %= 1000;
	
	setDigit1(digitsToSeparate / 100);
	
	digitsToSeparate %= 100;
	
	setDigit2(digitsToSeparate / 10);
	
	setDigit3(digitsToSeparate % 10);
}//end separateDigits

void encryptData(int dataNumber){

	separateDigits(dataNumber);
	
	//encrypting the each digit
	setDigit0(getDigit0() + 7);
	setDigit0(getDigit0() % 10);
	
	setDigit1(getDigit1() + 7);
	setDigit1(getDigit1() % 10);
	
	setDigit2(getDigit2() + 7);
	setDigit2(getDigit2() % 10);
	
	setDigit3(getDigit3() + 7);
	setDigit3(getDigit3() % 10);
	
	//changing digits position
	setEncryptedNumber((getDigit2() * 1000) + (getDigit3() * 100) + 
		(getDigit0() * 10) + getDigit1());
	
}//end ecryptData

void displayEncryptedNumber(){
	std::cout << "Number has been ecnrypted: ";
	if(getEncryptedNumber() < 1000){//if the first digit of the encrypted number is a 0
		std::cout << "0";
		}//end of if
	std::cout << getEncryptedNumber() << std::endl;
}//end displayEncryptedNumber

void decryptData(int dataNumber){

	setNumberToEncrypt(0);
	setEncryptedNumber(0);
	
	separateDigits(dataNumber);
	
	if(getDigit0() < 7){
		setDigit0(getDigit0() + 10);
		setDigit0(getDigit0() - 7);
	}//end if
	else{
		setDigit0(getDigit0() - 7);
	}//end else
	
	if(getDigit1() < 7){
		setDigit1(getDigit1() + 10);
		setDigit1(getDigit1() - 7);
	}//end if
	else{
		setDigit1(getDigit1() - 7);
	}//end else
	
	if(getDigit2() < 7){
		setDigit2(getDigit2() + 10);
		setDigit2(getDigit2() - 7);
	}//end if
	else{
		setDigit2(getDigit2() - 7);
	}//end else
	
	if(getDigit3() < 7){
		setDigit3(getDigit3() + 10);
		setDigit3(getDigit3() - 7);
	}//end if
	else{
		setDigit3(getDigit3() - 7);
	}//end else
	
	//changing digits position
	setEncryptedNumber((getDigit2() * 1000) + (getDigit3() * 100) + 
		(getDigit0() * 10) + getDigit1());
}//end decryptData

};// end ClassName class
