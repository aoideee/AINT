/*Write a function named printLetterGrade that accepts a number (an integer between 0 and 100) as a parameter and returns the letter grade
In the main, call the function and print out the letter grade that is returned from the function.



Use the table above as a reference for the letter grades.
IMPORTANT: if a parameter is passed that is not between 0 and 100 (both inclusive) your
program should print: Grade specified is not valid
Example
When printLetterGrade (92) is called the following will be the output
Your letter grade is: A
When printLetterGrade (69) is called the following will be the output
Your letter grade is: D+
When printLetterGrade (150) is called the following will be the output
Grade specified is not valid
Note:
 You must write a function prototype
 You must call the function from main
 You need to implement the function under main*/
 
#include <iostream>

using namespace std;

string printLetterGrade(int);

int main()
{
    int grade;
    
    cout<<"Print Letter Grade\n";
    
    cout<<"Enter percentage: ";
    cin>>grade;
    
    string calc = printLetterGrade(grade); 
    
    cout<<"The letter grade equivalent is: "<<calc<<".";

    return 0;
}

string printLetterGrade(int grade)
{
    string result;
    
    if(grade>=95)
    result="A+";
    else
    if(grade>=90)
    result="A";
    else
    if(grade>=85)
    result="B+";
    else
    if(grade>=80)
    result="B";
    else
    if(grade>=75)
    result="C+";
    else
    if(grade>=70)
    result="C";
    else
    if(grade>=65)
    result="D+";
    else
    if(grade>=60)
    result="D";
    else
    if(grade<60)
    result="F";
    if(grade>100)
    result="Grade specified is not valid";
    if(grade<0)
    result="Grade specified is not valid";
    
    return result;
}
