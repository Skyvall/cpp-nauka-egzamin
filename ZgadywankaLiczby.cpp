#include <iostream>


int main() {
    int num;
    int tries;
    int guess;


    srand(time(0));


    num = (rand() % 100) + 1; 
    std::cout << "Zgadnij liczbę od 1 do 100. Masz 10 prób." << std::endl;


    do{

     std::cout << "Podaj swoją liczbę: ";
     std::cin >> guess;

     if (guess > num) {
         std::cout << "Za duzo! Sprobuj ponownie." << std::endl;
     } else if (guess < num) {
         std::cout << "Za malo! Sprobuj ponownie." << std::endl;
     } else {
         std::cout << "Gratulacje! Zgadles liczbe." << std::endl;
     }

    } while (guess != num && tries < 10);

    if (tries == 10) {
        std::cout << "Przegrales! Liczba to: " << num << std::endl;
    }

   return 0;
    
}