#include <iostream>

int main(){


    std::string name = "Seb";
    double gpa = 2.5;
    char grade = 'S';
    bool student;
    char array[] = {'A', 'B', 'C', 'D'};
    std::string students[] = {"Spongebob" , "Patrick", "Squidward"};

    std::cout << sizeof(gpa) << "bytes\n";
    std::cout << sizeof(name) << "bytes\n";
    std::cout << sizeof(grade) << "bytes\n";
    std::cout << sizeof(student) << "bytes\n";
    std::cout << sizeof(array)/sizeof(char) << "elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << "Students\n";



    
    return 0;





}