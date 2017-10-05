/*
  Exercise 6 Solutions

  Author: Kaan Eraslan

  Purpose: If statements conditions, etc.

  Usage: Run Program. Provide the numbers in the instructions.

 */

// Package declaration

#include <iostream>
#include <string>

// end of Package declaration

// Variable Declaration

// 6.1 -----------
int student_score; // Score provided by the teacher
// 6.2 -----------
int last_digit; // Last digit of the score provided by the teacher
char digit_mark; // + or - according to the digit
// 6.3 ----------
int given_money; // money less than 1 dollar provided by the user
int remaining_money; // money remainder after divisions in pennies
int quarters; // money unit
int dimes; // money unit
int nickels; // money unit
// 6.4 ------------
int year; // user provided year
// 6.5 ------------
int hours; // user provided worked hours
int wage_hourly; // hourly wage of the employee
int over_time_hours; // hours that are above 40
int total_pay; // total amount to be paid to employee





int main()
{
  std::cout << "What did the student get? ";
  std::cin >> student_score;
  // exercise 6.1 conditions
  if (student_score <= 60){
    std::cout << "F.\n";
  }
  if ((student_score > 60) && (student_score <= 70)){
      std::cout << "D.\n";
    }
  if ((student_score > 70) && (student_score <= 80)){
    std::cout << "C.\n";
  }
  if ((student_score > 80) && (student_score <= 90)){
    std::cout << "B.\n";
  }
  if ((student_score > 90) && (student_score <= 100)){
    std::cout << "A.\n";
  }
  // exercise 6.2 modification
  std::cout << "What did the student get? ";
  std::cin >> student_score;
  last_digit = student_score % 10; // gives the last digit
  if ((last_digit >= 1) && (last_digit <= 3)){
    digit_mark = '-';
  }
  if ((last_digit >= 4) && (last_digit <= 7)){
    digit_mark = ' ';
  }
  if (((last_digit >= 8) && (last_digit <= 9)) || (last_digit == 0)){
    digit_mark = '+';
  }
  if (student_score <= 60){
    std::cout << "F.\n";
  }
  if ((student_score > 60) && (student_score <= 70)){
    std::cout << "D"<< digit_mark << ".\n";
  }
  if ((student_score > 70) && (student_score <= 80)){
    std::cout << "C" << digit_mark << ".\n";
  }
  if ((student_score > 80) && (student_score <= 90)){
    std::cout << "B" << digit_mark << ".\n";
  }
  if ((student_score > 90) && (student_score <= 100)){
    std::cout << "A" << digit_mark << ".\n";
  }
  // exercise 6.3
  std::cout << "Enter money amount less than 1 dollar: ";
  std::cin >> given_money;
  quarters = 0;
  dimes = 0;
  nickels = 0;
  quarters = given_money / 25;
  remaining_money = given_money % 25;
  if (remaining_money >= 10){
    dimes = remaining_money / 10;
    remaining_money = remaining_money % 10;
  }
  if (remaining_money >= 5){
    nickels = remaining_money / 5;
    remaining_money = remaining_money % 5;
  }
  std::cout << "You have, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickles, " << remaining_money << " pennies.\n";
  // exercise 6.4
  std::cout << "Enter year: ";
  std::cin >> year;
  if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)){
    std::cout << "This is a leap year.\n";
  }
  // exercise 6.5
  std::cout << "Enter worked hours: ";
  std::cin >> hours;
  wage_hourly = 10;
  over_time_hours = 0;
  total_pay = 0;
  if (hours > 40){
    over_time_hours = hours - 40;
    total_pay = (40 * wage_hourly) + ((2*over_time_hours)*10);
  }
  else
    total_pay = wage_hourly * hours;
  std::cout << "Total Pay: " << total_pay << ".\n";
  // END
  return (0);
}
