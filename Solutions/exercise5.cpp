/* Solutions to Exercise 5

   Author: Kaan Eraslan

   Purpose: Convert integers, hours, minutes, perimeters, kilometers,

   Usage: Run the program. Enter what's demanded. Withness the magic.

 */

// Package Declaration
#include <iostream>
#include <string>

// End of Package Declaration

// variable Declaration

float fahrenheit; // Converted from Celsius
int celsius; // The user input celsius
int radius; // radius for calculating sphere volume
const float PI = 3.1415926; // Pi value
float volume; // for storing the sphere volume
int width; // width for the rectangle
int height; // height for the rectangle
int perimeter; // perimeter of the rectangle
int kilometer; // km to convert to miles
float mile; // miles converted from km
int hour; // hour to convert minutes
int minute; // to add to the converted minutes from hour
int total_minutes; // total minutes after conversion


// End of variable Declaration

int main()
{
  std::cout << "Enter heat in Celsius: ";
  std::cin  >> celsius;
  fahrenheit = 9/5 * celsius + 32;
  std::cout << "Heat in Fahrenheit: " << fahrenheit << "\n";
  std::cout << "Enter the radius for the sphere: ";
  std::cin >> radius;
  volume = (radius*radius*radius) * 3/4 * PI;
  std::cout << "Volume of the sphere: " << volume << "\n";
  std::cout << "For the rectangle perimeter, enter width: ";
  std::cin >> width;
  std::cout << "Enter height: ";
  std::cin >> height;
  perimeter = 2*(width + height);
  std::cout << "Here is the perimeter: " << perimeter << "\n";
  std::cout << "Enter the number of kilometers: ";
  std::cin >> kilometer;
  mile = kilometer* 0.6213712;
  std::cout << "Here is the miles version: " << mile << "\n";
  std::cout << "Enter hours: ";
  std::cin >> hour;
  std::cout << "Enter minutes: ";
  std::cin >> minute;
  total_minutes = (hour * 60) + minute;
  std::cout << "Total minutes: " << total_minutes << "\n";
  std::cout << "Enter Total minutes: ";
  std::cin >> total_minutes;
  hour = total_minutes / 60;
  minute = total_minutes % 60;
  std::cout << "That makes: " << hour << " hours, and " << minute << " minutes.\n";
  return (0);
}
