#include <iostream>

void sort(int array[], int size);

int main() {

    int numbers[] = {7, 6, 2, 9, 8, 10, 1, 3, 4, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for(int element : numbers){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int numbers[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int maxIdx = 0;
        for (int j = 1; j <= i; j++) {
            if (numbers[j] > numbers[maxIdx]) {
                maxIdx = j;
            }
        }
        // Zamiana największego elementu na koniec nieposortowanej części
        int temp = numbers[i];    //temp dostaje idx 9 czyli 5 wartosc
        numbers[i] = numbers[maxIdx]; //idx 9 z wartoscia 5 zostaje nadpisany przez maxidx czyli index 5 z wartoscia 10
        numbers[maxIdx] = temp; // index 5 z wartoscia 10 laduje w temp
    }
}




