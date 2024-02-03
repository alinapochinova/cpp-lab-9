#include <iostream>

template <typename T, typename F>
int countElements(T* arr, int size, F condition) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (condition(arr[i])) {
            count++;
        }
    }
    return count;
}

int f1(int num) {
    return num > 2;
}

double f2(double num) {
    return num < 3.0;
}

char f3(char ch) {
    return ch != 'a';
}
int main() {

    // Массив целых чисел
    int intArr[] = { 1, 2, 3, 4, 5 };
    int intCount = countElements(intArr, 5, *f1);
    std::cout << "Number of elements greater than 2: " << intCount << std::endl;

    // Массив чисел с плавающей запятой
    double doubleArr[] = { 1.5, 2.7, 3.2, 4.1, 5.9 };
    int doubleCount = countElements(doubleArr, 5, *f2);
    std::cout << "Number of elements less than 3.0: " << doubleCount << std::endl;
    
    // Массив символов
    char charArr[] = { 'a', 'b', 'c', 'd', 'e' };
    int charCount = countElements(charArr, 5, *f3);
    std::cout << "Number of elements not equal to 'a': " << charCount << std::endl;

    return 0;
}
