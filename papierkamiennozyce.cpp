#include <iostream>
#include <cstdlib>
#include <ctime>



int main(){

int punkty_gracza = 0;
int punkty_komputera = 0;

std::cout <<"Witaj w grze papier kamień nożyce" << std::endl;

do {

// Start i ruch gracza


std::cout <<"Twoj ruch 1 - kamien, 2 - papier, 3 - nozyce" << std::endl;
int gracz;
std::cin >> gracz;

// Ruch komputera
std::srand(static_cast<unsigned int>(std::time(nullptr)));
int komputer = (std::rand() % 3) + 1;


// Logika gry

if(gracz == komputer){
    std::cout << "Remis!" << std::endl;
}
else if(
    (gracz == 1 && komputer == 3) ||
    (gracz == 2 && komputer == 1) ||
    (gracz == 3 && komputer == 2)
){
    std::cout << "Gracz wygrywa " << std::endl;
    punkty_gracza++;
}
else{
    std::cout << "Komputer wygrywa " << std::endl;
    punkty_komputera++;
}

    




}
while(punkty_gracza < 3 && punkty_komputera < 3);

if(punkty_gracza == 3){
    std::cout << "Gracz wygrywa!" << std::endl;
}
else if(punkty_komputera == 3){
    std::cout << "Komputer wygrywa! " << std::endl;
}

    
}
