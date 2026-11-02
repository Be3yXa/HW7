#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int unit;
    double mass, mass_kg;

    printf("Введите массу M: ");
    scanf("%lf", &mass);
    printf("Выберите номер единицы измерения:\n");
    printf("1 - килограмм\n2 - миллиграмм\n3 - грамм\n4 - тонна\n5 - центнер\n");
    printf("Ваш выбор: ");
    scanf("%d", &unit);

    switch (unit) {
    case 1: // Килограмм
        mass_kg = mass;
        break;
    case 2: // Миллиграмм
        mass_kg = mass / 1000000.0;
        break;
    case 3: // Грамм
        mass_kg = mass / 1000.0;
        break;
    case 4: // Тонна
        mass_kg = mass * 1000.0;
        break;
    case 5: // Центнер
        mass_kg = mass * 100.0;
        break;
    default:
        printf("Ошибка: неверный номер единицы измерения (должен быть от 1 до 5).\n");
        return 1;
    }

    printf("Значение массы в килограммах: %.6g кг\n", mass_kg);

    return 0;
}