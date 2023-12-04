#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    const int arraySize = 12;
    int numbers[arraySize];

    // Ініціалізація генератора випадкових чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Заповнення масиву випадковими числами
    std::cout << "Random massive: ";
    for (int i = 0; i < arraySize; ++i) {
        numbers[i] = std::rand() % 100; // Генеруємо випадкові числа в діапазоні від 0 до 99
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Сортування масиву за зростанням
    std::sort(numbers, numbers + arraySize);

    // Виведення відсортованого масиву
    std::cout << "Sorted massive: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

