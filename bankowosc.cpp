#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "Witamy w banku!" << std::endl;
        std::cout << "1. Pokaz stan konta" << std::endl;
        std::cout << "2. Wplata" << std::endl;
        std::cout << "3. Wyplata" << std::endl;
        std::cout << "4. Wyjscie" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
        {
            std::cout << "Wplata: ";
            double depositAmount;
            std::cin >> depositAmount;
            balance += depositAmount;
            break;
        }
        case 3:
        {
            std::cout << "Wyplata: ";
            double withdrawAmount;
            std::cin >> withdrawAmount;
            balance -= withdrawAmount;
            break;
        }
        case 4:
            std::cout << "EXIT" << std::endl;
            break;
        default:
            std::cout << "Niepoprawny wybor: Jeszcze raz" << std::endl;
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Stan konta: " << balance << std::endl;
}

double deposit()
{

    return 0;
}

double withdraw(double balance)
{

    return 0;
}