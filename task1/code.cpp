#define _USE_MATH_DEFINES
//#define USE_FLOAT

#include <iostream>
#include <cmath>

#ifdef USE_FLOAT
using DataType = float;
#else
using DataType = double;
#endif

int main() {
    const int arraySize = 10000000;
    DataType* array = new DataType[arraySize];

    // Заполнение массива синусами
    for (int i = 0; i < arraySize; ++i) {
        array[i] = std::sin(i * 2 * M_PI / arraySize);
    }

    // Вычисление суммы
    DataType sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += array[i];
    }

    std::cout << "Summed: " << sum << std::endl;

    delete[] array;
    return 0;
}
