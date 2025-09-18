#include <iostream>
#include <iomanip>










    int main(){



        double prices[3] = {5.00, 7.50, 9.99};

        for (int i = 0; i < 3; ++i){

            std::cout << std::fixed << std::setprecision(2) << prices[i] << '\n';
        }

        return 0;


    }


    // std::string cars[0];

    // cars[0] = "Ford";
    // cars[1] = "Skoda";
    // cars[2] = "Camaro";


    // std::cout << cars[0] << "\n";
    // std::cout << cars[1] << "\n";
    // std::cout << cars[2] << "\n";

    // return 0;
