#include <iostream>

int main(){
  std::string fizz = "Fizz";
  std::string buzz = "Buzz";

  for(int number = 1; number <= 100; number++) {
    if(number % 15 == 0){
      std::cout << "FizzBuzz\n";
    }
    else if(number % 3 == 0) {
      std::cout << fizz << "\n";
    } 
    else if (number % 5 == 0) 
    {
      std::cout << buzz << "\n";
    } 
    else
    {
      std::cout << number << "\n";
    }
  }
}