#include <iostream>
int main() 
{
  int year;
  
  //Program takes a year as input 
  std::cout << "Please, enter an year: \n";
  std::cin >> year; 
  
  //Check the size of the integer
  if (sizeof(year) != 4)
  {
    std::cout << "That is not a valid input!";
  }
  
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        std::cout << "The year falls in a Leap Year!";
    }
  else 
  {
  std::cout << y << "is not a leap year :( \n";  
  }

}