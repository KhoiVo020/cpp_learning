#include <iostream>

int main() {
int dog_age = 3;
// This is the initial dog's age  
 int early_years= 21; // fog first 2 years = 21 human years
 int later_years = 4;  // dog following year each equal 4 human years
 later_years = (dog_age-2)*4;
 int human_years = 2; // dog total human year
      human_years = early_years + later_years;
      std::cout << "My name is Hy. Ruff ruff, I am " << human_years <<" years old in human years";
      return 0;
}
