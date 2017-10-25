/*
  Solutions to Exercise 8

  Author: Kaan Eraslan

  Usage: Run program. Follow the instructions on the command line.

 */
// Package Declaration
#include <iostream>
#include <string>
#include <assert.h>
#include <cmath>
// end of Package Declaration

// Variable Declaration

// 8.1

std::string plus_dash_plus; // reproduces the +--+ combination
std::string vertical_line; // reproduces |
int counter; // counter for while statements
int counter2; // another counter for nested statements
int counter3; // yet another counter for nested while statements

// 8.2
int total_resistance_number; // total number of resistance
float numbers; // numbers after decimal points
float total_resistance_value; // total value of the resistances
float total_resistance; // resulting value of the calculations.
// provided by the user
// 8.3
int number_of_numbers; /* total number of numbers
                          that is going to be provided by the user */
float average_number; // number provided by the user
// 8.4
int top_multiplication_number; // upper bound for the multiplication table
int result_multiplication; // result of the multiplication
// 8.5
std::string input_char; // input char entered by the user
std::string vowels; // vowels
std::string consonants; // consonant list
std::size_t found; // found position of the searched string
// 8.6
std::string input_integers; // input integers entered by the user
char int_char; // section of the input integer string.
std::string output_str; // output string to be printed in terminal
// 8.7



// end of Variable Declaration

int main()
{
  // exercise 8.1
  plus_dash_plus = "+-----"; // this would be printed
  vertical_line = "|     "; // this would be printed
  counter3 = 0; // this is a counter for the global operation
  // by the end of it, we shall have 8 vertical and horizontal grids
  while (counter3 <= 8){
    counter = 0; // counter for the horizontal grid
  //
    while (counter <= 8){
      std::cout << plus_dash_plus;
      counter += 1;
    }
    std::cout << "+\n"; // we add the last element of the grid
    counter2 = 0; // counter for vertical grids in the box
    while (counter2 <= 3){
      counter = 0; // counter for placing the vertical grids on the below
      // the + signs of the horizontal grid
      while (counter <= 8){
        std::cout << vertical_line;
        counter += 1;
      }
      std::cout << "|\n";
      counter2 += 1;
    }
    counter3 += 1;
  }
  counter = 0; // counter for the last horizontal grid at the bottom.
  while (counter <= 8){
    std::cout << plus_dash_plus;
    counter += 1;
  }
  std::cout << "+\n";
  // exercise 8.1 ends
  // exercise 8.2
  std::cout << "Enter the total number of parallel resistance: ";
  std::cin >> total_resistance_number;
  // initializing the array with the provided input
  float parallel_resistance[total_resistance_number];
  assert(total_resistance_number -1 < signed (sizeof(
                                           parallel_resistance
                                           )/sizeof(
                                                    parallel_resistance[0]
                                                    )
                                    ));
  assert(total_resistance_number >= 0);
  counter = total_resistance_number - 1;
  counter2 = 0;
  while(counter2 <= counter){
    std::cout << "Enter the value: ";
    std::cin >> parallel_resistance[counter2];
    counter2 += 1;
  }
  counter2 = 0;
  total_resistance_value = 0;
  while(counter2 <= counter){
    numbers = 1 / parallel_resistance[counter2];
    total_resistance_value += numbers;
    counter2 += 1;
  }
  //total_resistance_value = std::floor(total_resistance_value * 100) / 100;
  total_resistance = 1 / total_resistance_value;
  std::cout << "Here is the the total resistance of all the parallel resistances: "
            << total_resistance << ".\n";
  // exercise 8.2 ends
  std::cout << "Enter how many numbers you would be entering: ";
  std::cin >> number_of_numbers;
  int user_numbers[number_of_numbers]; // array for storing user input
  assert(number_of_numbers - 1 < signed (sizeof(
                                                user_numbers
                                                )/sizeof( user_numbers[0]
                                                                     ))
         );
  counter = 0;
  while (counter < number_of_numbers){
    std::cout << "Enter the number: ";
    std::cin >> user_numbers[counter];
    counter += 1;
  }
  counter = 0;
  counter2 = 0;
  while (counter < number_of_numbers){
    counter2 = counter2 + user_numbers[counter];
    counter += 1;
  }
  std::cout << counter2 << "\n";
  average_number = counter2 / number_of_numbers;
  std::cout << "Average of the numbers are: " << average_number << ".\n";
  // exercise 8.3 ends
  std::cout << "Enter the upper bound for the multiplication table: ";
  std::cin >> top_multiplication_number;
  int multiplication_array[top_multiplication_number+1];
  assert(top_multiplication_number < signed (sizeof(multiplication_array) /
                                                 sizeof(multiplication_array[0]))
         );
  counter = 0;
  while (counter <= top_multiplication_number){
    multiplication_array[counter] = counter;
      counter += 1;
  }
  counter = 0;
  while (counter <= top_multiplication_number){
    counter2 = 0;
    while (counter2 <= top_multiplication_number){
      result_multiplication = multiplication_array[counter] * multiplication_array[counter2];
      std::cout << counter
                << " x "
                << counter2
                << " = "
                << result_multiplication
                << "\n";
      counter2 += 1;
    }
    counter += 1;
  }
  // exercise 8.4 ends
  std::cout << "Enter a character: ";
  std::cin >> input_char;
  vowels = "aeiouöüı";
  consonants = "qwrtypğasdfghjklşzxcvbnmç";
  found = vowels.find(input_char);
  if (found != std::string::npos){
    std::cout << "You have entered a vowel\n";
  }
  else{
    found = consonants.find(input_char);
    if (found != std::string::npos){
      std::cout << "You have entered a consonant\n";
    }
  }
  // exercise 8.5 ends
  //
  std::cout << "Enter a number for converting into letters: ";
  std::cin >> input_integers;
  for(int unsigned counter2=0; counter2 < input_integers.length(); ++counter2){
    int_char = input_integers.at(counter2);
    // Starting Switch
    switch (int_char) {
    case '0':
      output_str += "zero ";
      break;
    case '1':
      output_str += "one ";
      break;
    case '2':
      output_str += "two ";
      break;
    case '3':
      output_str += "three ";
      break;
    case '4':
      output_str += "four ";
      break;
    case '5':
      output_str += "five ";
      break;
    case '6':
      output_str += "six ";
      break;
    case '7':
      output_str += "seven ";
      break;
    case '8':
      output_str += "eight ";
      break;
    case '9':
      output_str += "nine ";
      break;
    }
  }
  std::cout << "Here are the numbers in string: " << output_str << "\n";
  // Exercise 8.6 ends
  //
  std::cout << "Enter a number for converting into letters: ";
  std::cin >> input_integers;
  output_str = "";
  if (input_integers.length() > 1){
    if (input_integers == "11"){
      output_str = "eleven";
    }
    if (input_integers == "12"){
      output_str = "twelve";
    }
    if (input_integers == "13"){
      output_str = "thirteen";
    }
    if (input_integers == "14"){
      output_str = "fourteen";
    }
    if (input_integers == "15"){
      output_str = "fifteen";
    }
    if (input_integers == "16"){
      output_str = "sixteen";
    }
    if (input_integers == "17"){
      output_str = "seventeen";
    }
    if (input_integers == "18"){
      output_str = "eighteen";
    }
    if (input_integers == "19"){
      output_str = "nineteen";
    }
    if (input_integers == "20"){
      output_str = "twenty";
    }
    if (input_integers == "30"){
      output_str = "thirty";
    }
    if (input_integers == "40"){
      output_str = "fourty";
    }
    if (input_integers == "50"){
      output_str = "fifthy";
    }
    if (input_integers == "60"){
      output_str = "sixty";
    }
    if (input_integers == "70"){
      output_str = "seventy";
    }
    if (input_integers == "80"){
      output_str = "eighty";
    }
    if (input_integers == "90"){
      output_str = "ninety";
    }
    if (input_integers == "100"){
      output_str = "hundered";
    }
  }

  for(int unsigned counter2=0; counter2 < input_integers.length(); ++counter2){
    if (input_integers.length() == 1){
      int_char = input_integers.at(counter2);
      // Starting Switch
      switch (int_char) {
      case '0':
        output_str += "zero ";
        break;
      case '1':
        output_str += "one ";
        break;
      case '2':
        output_str += "two ";
        break;
      case '3':
        output_str += "three ";
        break;
      case '4':
        output_str += "four ";
        break;
      case '5':
        output_str += "five ";
        break;
      case '6':
        output_str += "six ";
        break;
      case '7':
        output_str += "seven ";
        break;
      case '8':
        output_str += "eight ";
        break;
      case '9':
        output_str += "nine ";
        break;
      }
    }
    if ((counter2 == 0)
        and (input_integers.length() > 1)
        and (input_integers != "20")
        and (input_integers != "30")
        and (input_integers != "40")
        and (input_integers != "50")
        and (input_integers != "60")
        and (input_integers != "70")
        and (input_integers != "80")
        and (input_integers != "90")
        and (input_integers != "100")
        ){
      int_char = input_integers.at(counter2);
      // Starting Switch
      switch (int_char) {
      case '2':
        output_str += "twenty ";
        break;
      case '3':
        output_str += "thirty ";
        break;
      case '4':
        output_str += "fourty ";
        break;
      case '5':
        output_str += "fifthy ";
        break;
      case '6':
        output_str += "sixty ";
        break;
      case '7':
        output_str += "seventy ";
        break;
      case '8':
        output_str += "eighty ";
        break;
      case '9':
        output_str += "ninety ";
        break;
      }
    }
    else{
      if (counter2 != 0){
        int_char = input_integers.at(counter2);
        // Starting Switch
        switch (int_char) {
        case '1':
          output_str += "one ";
          break;
        case '2':
          output_str += "two ";
          break;
        case '3':
          output_str += "three ";
          break;
        case '4':
          output_str += "four ";
          break;
        case '5':
          output_str += "five ";
          break;
        case '6':
          output_str += "six ";
          break;
        case '7':
          output_str += "seven ";
          break;
        case '8':
          output_str += "eight ";
          break;
        case '9':
          output_str += "nine ";
          break;
        }
      }
    }
  }
  std::cout << "Here are the numbers in string: " << output_str << "\n";
  // Exercise 8.7 ends
  return(0);
}
