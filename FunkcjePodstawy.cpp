#include <iostream>

void happyBirthday(std::string name, int age);

int main() {

    std::string name = "Bro";
    int age; std::cout << "Podaj swój wiek: "; std::cin >> age;
    happyBirthday(name, age);

return 0;
}

void happyBirthday(std::string name, int age){




    std::cout << "Happy Birthday to you! " << name << std::endl;
    std::cout << "Happy Birthday dear " << name << "!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "You are now " << age << " years old!" << std::endl;
}


