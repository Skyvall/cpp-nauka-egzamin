#include <iostream>

int main() {

   double temp;

   char unit;


   std::cout << "Enter temperature: ";
   std::cin >> temp;

   std::cout << "Enter unit you conert from (C/F): ";
   std::cin >> unit;

   if (unit == 'C' || unit == 'c') {
       std::cout << "Temperature in Fahrenheit: " << (temp * 9/5) + 32 << std::endl;
   } else {
       std::cout << "Temperature in Celsius: " << (temp - 32) * 5/9 << std::endl;
   }

   return 0;
}