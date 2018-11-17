/**
Course:  CS213 - Programming II  - 2018
Title:   Assignment 3 - Individual Task - problem 7, page 350( Programming Abstractions)
Program: CS213-2018-A3-V0
Purpose: Sum of digits using recursion
Author: Name :- Hanan Mohamed Abdelrahim ...... ID :- 20170375
Date:    3rd of November 2018
*/

#include <iostream>

using namespace std;

int digitSum(int n); //function prototype

int main()
{
cout<<digitSum(172889);
}

int digitSum(int n)
{

    if(n < 10) //if less than 10, then it is only 1 digit that is returned directly
    {
       return n;
    }
    else
    {
      return digitSum(n/10) + n%10; // check the new number if it is still greater than 10, divide it and add the remainder to the remainder from the previous addition

    }
}
