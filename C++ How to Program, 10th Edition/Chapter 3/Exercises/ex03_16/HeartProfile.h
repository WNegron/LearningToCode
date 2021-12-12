/* ************************************************************************************

Filename: HealthProfile.h
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.16 using only the tools and methods taught up to Chapter 3.

Description:

3.16 (Computerization of Health Records) A health-care issue that has been in the news
lately is the computerization of health records. This possibility is being approached
cautiously because of sensitive privacy and security concerns, among others. [We address
such concerns in later exercises.] 

Computerizing health records could make it easier for patients to share their health
profiles and histories among their various health-care professionals. This could improve
the quality of health care, help avoid drug conflicts and erroneous drug prescriptions,
reduce costs and, in emergencies, could save lives. 

In this exercise, you’ll design a “starter” HealthProfile class for a person. The class
attributes should include the person’s first name, last name, gender, date of birth 
(consisting of separate attributes for the month, day and year of birth),
height (in inches) and weight (in pounds).

Your class should have a constructor that receives this data. For each attribute, provide
set and get functions. The class also should include member functions that calculate and 
return the user’s age in years, maximum heart rate and target-heart-rate range
(see Exercise 3.15), and body mass index (BMI; see Exercise 2.30).

Write a program that prompts for the person’s information, instantiates an object of class
HealthProfile for that person and prints the information from that object—including the
person’s first name, last name, gender, date of birth, height and weight—then calculates
and prints the person’s age in years, BMI, maximum heart rate and target-heart-rate range.

It should also display the BMI values chart from Exercise 2.30. 

BMI VALUES
Underweight: less than 18.5 
Normal: between 18.5 and 24.9 
Overweight: between 25 and 29.9 
Obese: 30 or greater

 
                     weightInPounds x 703
BMI =  ---------------------------------------------  
                heightInInches × heightInInches
                
or

                     weightInKilograms
BMI = ----------------------------------------------
				      heightInMeters × heightInMeters

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <string> // enable program to use C++ string data type

class HealthProfile {// class definition

private:

/******************           Data Members           ***********************/
int month;
int day;
int year;
std::string firstName;
std::string lastName;
char gender;
int height;
int weight;	

public:

/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
	explicit HealthProfile(std::string first,std::string last,char sex,int mm,int dd,
	int yyyy,int inches,int pounds):firstName(first),lastName(last),gender(sex),month(mm),
	day(dd),year(yyyy),height(inches),weight(pounds){
	}//end HeartRate constructor function

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members

	// function that sets the month
	void setMonth(int monthNumber){
 		if(monthNumber >= 1 && monthNumber <= 12){//validates month is between 1 to 12
 			month = monthNumber;//sets data member from parameter
		}//end if
		else{
			month = 1;
		}//end else
 	}//end setMonth
 	
 	// function that sets the day
 	void setDay(int dayNumber){
 		if(dayNumber >= 1 && dayNumber <= 31){//validates day is between 1 to 31
 			day = dayNumber;//sets data member from parameter
 		}//end if
 		else{//if value is not in range prints out error message
 			std::cerr << "Day is out of range." << std::endl;
 		}//end else
 	}//end setDay
 	
 	// function that sets the year
 	void setYear(int yearNumber){
 		year = yearNumber;//sets data member from parameter
 	}//end setYear
 	
 	// function that sets the first name
	void setFirstName(std::string first){
		firstName = first;
	}// end setFirstName
		
	// function that sets the last name
	void setLastName(std::string last){
		lastName = last;
	}// end setLastName
	
	void setGender(char sex){
		gender = sex;
	}//end setGender
	
	void setHeight(int inches){
		height = inches;
	}//end setHeight
	
	void setWeight(int pounds){
		weight = pounds;
	}//end setWeight
	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
	int getMonth(){
		return month;
	}//end getMonth
	
	int getDay(){
		return day;
	}//end getDay
	
	int getYear(){
		return year;
	}//end getYear
	
	// function that returns the name
	std::string getFirstName(){
		return firstName;
	}// end getFirstName
		
	// function that returns the name
	std::string getLastName(){
		return lastName;
	}// end getLastName
	
	char getGender(){
		return gender;
	}//end getGender
	
	int getHeight(){
		return height;
	}//end getHeight
	
	int getWeight(){
		return weight;
	}//end getWeigth

/**************************  Other Member Functions *******************************/
	void displayProfile(){
		
		std::cout << std::endl << "Full Name: " << getLastName() << ", " 
		     << getFirstName();
		     
		std::cout << "\nDate of Birth: " << getMonth() << "/" << getDay() << "/" 
		     << getYear() << std::endl;
		     
		std::cout << "Age: " << calculateAge();
		
		std::cout << "\nGender: " << getGender();
		
		std::cout << "\nHeight: " << getHeight();
		
		std::cout << "\nWeight: " << getWeight();
		
		std::cout << "\nBMI:    " << calculateBMI();    
		
		std::cout << "\nMax Heart Rate: " << calculateMaxRate();
		
		std::cout << "\nTarget Max 85%: " << calculateMaxTargetRate();
		
		std::cout << "\nTarget Min 50%: " << calculateMinTargetRate();
		
		std::cout << std::endl << std::endl;
		
		std::cout << "BMI VALUES\n"
				  << "Underweight: less than 18.5 \n"
				  << "Normal: between 18.5 and 24.9 \n"
				  << "Overweight: between 25 and 29.9 \n"
				  << "Obese: 30 or greater \n";
		
		std::cout << std::endl;
	}//end displayProfile
	
	void displayBMI(){
		
		std::cout << std::endl;
		if(calculateBMI() < 18.5)
			std::cout << "Your weight is underweight." << std::endl;
		if(calculateBMI() >= 18.5 && calculateBMI() < 25)
			std::cout << "Your weight is normal." << std::endl;
		if(calculateBMI() >= 25 && calculateBMI() < 30)
			std::cout << "Your weight is overweight." << std::endl;
		if(calculateBMI() >= 30)
			std::cout << "Your weight is obese." << std::endl;
		
	}//end bodyMassIndex
	
	double calculateBMI(){
		return (getWeight() * 703)  / (getHeight() * getHeight());
	}//end calculateBMI
	
	int calculateAge(){
		return 2021 - getYear();//using current year at the time of writing the code
	}//end calculateAge
	
	int calculateMaxRate(){
		return 220 - calculateAge();
	}//end calculateMaxRate
	
	double calculateMaxTargetRate(){
		return calculateAge() * 0.85;
	}//end calculateTargetRate
	
	double calculateMinTargetRate(){
		return calculateAge() * 0.50;
	}//end calculateTargetRate
};// end HeartProfile class

