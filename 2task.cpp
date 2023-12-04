#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>

void replaceNegativeBeforeMax(int arr[], int size) {
    if (size <= 0) {
        std::cout << "Масив порожній або неправильного розміру." << std::endl;
        return;
    }

    int maxIndex = 0;
    int maxValue = arr[0];

    // Знаходимо індекс першого максимального елемента
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxValue) {
            maxIndex = i;
            maxValue = arr[i];
        }
    }

    // Замінюємо всі від'ємні елементи, що передують першому максимальному елементу
    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    const int arraySize = 10; // Розмір масиву
    int array[arraySize];

    // Ініціалізація генератора випадкових чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Заповнення масиву випадковими числами
    std::cout << "Random massive: ";
    for (int i = 0; i < arraySize; ++i) {
        array[i] = std::rand() % 100 - 50; // Генеруємо випадкові числа в діапазоні від -50 до 49
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    replaceNegativeBeforeMax(array, arraySize);

    // Вивід зміненого масиву
    std::cout << "New massive: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
