#include "arraylib.h"
#include <cstddef>
#include <vector>
#include <algorithm>
#include <cassert>

int arr_sum(const int* arr, std::size_t n) {
    int sum = 0;
    for (std::size_t i = 0; i < n; ++i) sum += arr[i];
    return sum;
}

int arr_max(const int* arr, std::size_t n) {
    assert(n > 0);
    int max_val = arr[0];
    for (std::size_t i = 1; i < n; ++i)
        if (arr[i] > max_val) max_val = arr[i];
    return max_val;
}

int arr_min(const int* arr, std::size_t n) {
    assert(n > 0);
    int min_val = arr[0];
    for (std::size_t i = 1; i < n; ++i)
        if (arr[i] < min_val) min_val = arr[i];
    return min_val;
}

double arr_average(const int* arr, std::size_t n) {
    if (n == 0) return 0.0;
    double sum = 0.0;
    for (std::size_t i = 0; i < n; ++i) sum += arr[i];
    return sum / static_cast<double>(n);
}

int arr_count_positive(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (arr[i] > 0) ++count;
    return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (arr[i] < 0) ++count;
    return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (arr[i] == 0) ++count;
    return count;
}

int arr_product(const int* arr, std::size_t n) {
    int product = 1;
    for (std::size_t i = 0; i < n; ++i) product *= arr[i];
    return product;
}

double arr_median(const int* arr, std::size_t n) {
    assert(n > 0);
    std::vector<int> copy(arr, arr + n);
    std::sort(copy.begin(), copy.end());
    std::size_t mid = n / 2;
    if (n % 2 == 1) {
        return static_cast<double>(copy[mid]);
    } else {
        return (static_cast<double>(copy[mid - 1]) +
                static_cast<double>(copy[mid])) / 2.0;
    }
}