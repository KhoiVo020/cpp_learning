#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;
  std::cout << "Enter nummber of Columbian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter nummber of Reais: \n";
  std::cin >> reais;
   std::cout << "Enter nummber of Soles: \n";
  std::cin >> soles;
  //1 pesos = 0.056 dollars
  // 1 reasis = 0.20 dollars
  // 1 soles = 0.27 dollars
  double conversion_rate1= 0.056;
  double conversion_rate2= 0.20;
  double conversion_rate3= 0.27;
  dollars = (conversion_rate1*pesos)+(conversion_rate2*reais)+(conversion_rate3*soles);
  std::cout <<"US Dollars = $" << dollars <<"\n";
return 0;  
}
