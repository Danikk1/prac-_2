#include <iostream>
#include <cmath>

using namespace std;

// Функция для сложения
double add(double a, double b) {
    return a + b;
}

// Функция для вычитания
double subtract(double a, double b) {
    return a - b;
}

// Функция для умножения
double multiply(double a, double b) {
    return a * b;
}

// Функция для деления
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        setlocale(LC_ALL, "Russian");
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

// Функция для возведения в степень
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Функция для нахождения квадратного корня
double squareRoot(double x) {
    if (x >= 0) {
        return sqrt(x);
    }
    else {
        setlocale(LC_ALL, "Russian");
        cout << "Ошибка: извлечение корня из отрицательного числа!" << endl;
        return 0;
    }
}

// Функция для нахождения 1 процента от числа
double findPercentage(double number) {
    return 0.01 * number;
}

// Функция для нахождения факториала числа
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int choice;
    double num1, num2;

    do {
        // Выводим меню
        setlocale(LC_ALL, "Russian");
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;

        // Выбор операции
        setlocale(LC_ALL, "Russian");
        cout << "Введите номер операции: ";
        cin >> choice;

        switch (choice) {
        case 1:
            setlocale(LC_ALL, "Russian");
            cout << "Введите два числа для сложения:" << endl;
            cin >> num1 >> num2;
            cout << "Результат: " << add(num1, num2) << endl;
            break;
        case 2:
            setlocale(LC_ALL, "Russian");
            cout << "Введите два числа для вычитания:" << endl;
            cin >> num1 >> num2;
            cout << "Результат: " << subtract(num1, num2) << endl;
            break;
        case 3:
            setlocale(LC_ALL, "Russian");
            cout << "Введите два числа для умножения:" << endl;
            cin >> num1 >> num2;
            cout << "Результат: " << multiply(num1, num2) << endl;
            break;
        case 4:
            setlocale(LC_ALL, "Russian");
            cout << "Введите два числа для деления:" << endl;
            cin >> num1 >> num2;
            cout << "Результат: " << divide(num1, num2) << endl;
            break;
        case 5:
            setlocale(LC_ALL, "Russian");
            cout << "Введите основание и показатель степени:" << endl;
            cin >> num1 >> num2;
            cout << "Результат: " << power(num1, num2) << endl;
            break;
        case 6:
            setlocale(LC_ALL, "Russian");
            cout << "Введите число для нахождения квадратного корня:" << endl;
            cin >> num1;
            cout << "Результат: " << squareRoot(num1) << endl;
            break;
        case 7:
            setlocale(LC_ALL, "Russian");
            cout << "Введите число для нахождения 1 процента:" << endl;
            cin >> num1;
            cout << "Результат: " << findPercentage(num1) << endl;
            break;
        case 8:
            setlocale(LC_ALL, "Russian");
            cout << "Введите число для нахождения факториала:" << endl;
            cin >> num1;
            cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
            break;
        case 9:
            setlocale(LC_ALL, "Russian");
            cout << "Программа завершена." << endl;
            break;
        default:
            cout << "Некорректный выбор операции. Пожалуйста, выберите снова." << endl;
        }

    } while (choice != 9);

    return 0;
}
