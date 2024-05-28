#include <iostream>
#include <vector>

template <typename T>
int find_second_max_index(const T* arr, size_t size) {
    // Проверка валидности входных данных
    if (size < 2) {
        throw std::invalid_argument("The array must contain at least 2 elements");
    }

    // Поиск первого и второго максимума
    int first_max_index = 0, second_max_index = -1;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > arr[first_max_index]) {
            second_max_index = first_max_index;
            first_max_index = i;
        }
        else if (second_max_index == -1 || arr[i] > arr[second_max_index]) {
            second_max_index = i;
        }
    }

    // Возвращение индекса второго максимума
    return second_max_index;
}

// Тестовая функция для float
void test_float() {
    float arr[] = { 1.2, 3.4, 2.1, 4.5, 3.2 };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int index = find_second_max_index(arr, size);
    std::cout << "The second maximum in the array float: " << arr[index] << ", index: " << index << std::endl;
}

// Тестовая функция для double
void test_double() {
    double arr[] = { 1.2345, 3.4567, 2.1234, 4.5678, 3.2134 };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int index = find_second_max_index(arr, size);
    std::cout << "The second maximum in the array double: " << arr[index] << ", index: " << index << std::endl;
}

// Тестовая функция для int
void test_int() {
    int arr[] = { 12, 34, 21, 45, 32 };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int index = find_second_max_index(arr, size);
    std::cout << "The second maximum in the array int: " << arr[index] << ", index: " << index << std::endl;
}

// Тестовая функция для char
void test_char() {
    char arr[] = { 'a', 'd', 'b', 'e', 'c' };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int index = find_second_max_index(arr, size);
    std::cout << "The second maximum in the array char: " << arr[index] << ", index: " << index << std::endl;
}

int main() {
    test_float();
    test_double();
    test_int();
    test_char();

    return 0;
}
// последние два пункта выполнить не получилось