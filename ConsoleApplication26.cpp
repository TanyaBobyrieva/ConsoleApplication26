#include <stdio.h>
#include <locale.h>
int main() {
    // Оголошення масиву для зберігання двох чисел
    int numbers[2];
    setlocale(LC_ALL, "ukr"); // Встановлюємо зчитування для української мови
    // Запит користувача для введення двох чисел
    for (int i = 0; i < 2; ++i) {
        printf("Введіть %s число: ", i == 0 ? "перше" : "друге");
        scanf_s("%d", &numbers[i]);
    }
    // Виведення результату
    if (numbers[0] > numbers[1]) {  // Порівняння чисел
        printf("Перше число: %d\n", numbers[0]);
    }
    else {
        printf("Обидва числа: %d, %d\n", numbers[0], numbers[1]);
    }
    return 0;
}

