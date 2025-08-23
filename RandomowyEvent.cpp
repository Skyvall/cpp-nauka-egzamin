#include <iostream>
#include <ctime>



int main() {

    srand(time(0));
    int randNum = rand() % 5 + 1;


    switch(randNum) {
        case 1:
            std::cout << "Hello, World!" << std::endl;
            break;
        case 2:
            std::cout << "C++ is fun!" << std::endl;
            break;
        case 3:
            std::cout << "I love programming!" << std::endl;
            break;
        case 4:
            std::cout << "Coding is awesome!" << std::endl;
            break;
        case 5:
            std::cout << "Let's write some code!" << std::endl;
            break;
    }




    return 0;
}