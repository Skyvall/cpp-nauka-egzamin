#include <iostream>


std::string concateStrings(std::string string1, std::string string2);; 

int main() {



    std::string firstName = "Sebastian";
    std::string lastName = "Kuberna";

    std::string fullName = concateStrings(firstName, lastName);
    std::cout << fullName << std::endl;



    return 0;
}

std::string concateStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}
