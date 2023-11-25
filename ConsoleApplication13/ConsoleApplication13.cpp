#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
//Лабараторная работа номер 6.
//Вариант 21, задание номер 2, Динамический массив.
//Дана квадратная матрица порядка M. 
//Обнулить элементы матрицы,
//лежащие на главной диагонали и выше нее. 
//Условный оператор не использовать.
//Данные вводятся пользователем с клавиатуры 
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int M;
    cout << "Введите порядок матрицы: ";
    cin >> M;
    // Создаем двумерный динамический массив
    int** matrix = new int* [M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[M];
    }
    // Заполняем матрицу элементами
    cout << "Введите элементы матрицы: "<<endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
    // Обнуляем элементы на главной диагонали и выше нее
    for (int i = 0; i < M; i++) {
        for (int j = i; j < M; j++) {
            matrix[i][j] = 0;
        }
    }
    // Выводим полученную матрицу
    cout <<"Получившаяся матрица: "<<endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Освобождаем память
    for (int i = 0; i < M; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
