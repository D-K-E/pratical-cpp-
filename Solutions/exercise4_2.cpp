/*
Calculate the perimeter of a rectangle
and Write and E block

Author: Kaan Eraslan

Purpose: Title says it all

Usage: Run the program.
 */

// Library Declaration

#include <iostream>

// End of Library Declaration

// Variable Declaration

int width; // Width of the Rectangle in inches
int height; // Height of the rectangle in inches
int perimeter; // Perimeter of the rectangle

// End of Variable Declaration

// print E
int main( )
{
  std::cout << "*" << "*" << "*\n" << "*\n" << "*" << "*" << "*\n" << "*\n" << "*" << "*" << "*\n" << "E, done.\n";
  width = 3;
  height = 5;
  perimeter = (3+5)* 2;
  std::cout << "Here is the perimeter of the rectangle: " << perimeter << ".\n";
  return (0);
}
