#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int data[] = {-5, 0, 3, 3, 8, -2};
    const std::size_t n = sizeof(data) / sizeof(data[0]);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Исходный массив: ";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << data[i] << (i + 1 < n ? " " : "\n");
    }
    std::cout << "Количество элементов: " << n << '\n';
    std::cout << "Сумма:               " << arr_sum(data, n) << '\n';
    std::cout << "Максимум:            " << arr_max(data, n) << '\n';
    std::cout << "Минимум:             " << arr_min(data, n) << '\n';
    std::cout << "Среднее:             " << arr_average(data, n) << '\n';
    std::cout << "Положительных:       " << arr_count_positive(data, n) << '\n';
    std::cout << "Отрицательных:       " << arr_count_negative(data, n) << '\n';
    std::cout << "Нулевых:             " << arr_count_zero(data, n) << '\n';
    std::cout << "Произведение:        " << arr_product(data, n) << '\n';
    std::cout << "Медиана:             " << arr_median(data, n) << '\n';

    return 0;
}