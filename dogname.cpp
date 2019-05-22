#include <iostream>
#include <string>


int main(){

double x = 0;
std::string name;
  
  std::cout << "What is your dogs name?\n";
  std::cin >> name;

  std::cout << "How old is your dog?\n";
  std::cin >> x;
  
  int early_years = 21;
  int later_years = (x - 2)*4;
  int human_years= early_years + later_years;

  std::cout << "Ruff Ruff! My name is " << name << ",\n";

  if (x == 1) { 
  	std::cout << "I am 10.5 years old in human years!\n";
    } else if (x == 2) {
    std::cout << "I am 21 years old in human years!\n";
    } else { 
    std::cout << "I am " << human_years << " years old in human years\n!";
  };


}