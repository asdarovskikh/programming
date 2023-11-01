#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << " Назовите нужное вам действие. " << '\n'
         << "1-Умножение" << '\n' << "2-Сложение" << '\n' << "3-Вычитание" << '\n'
         << "4-Деление" << '\n' << "5-Факториал" << '\n' << "6-Степень" << '\n'
         << "7-Логарифм" << '\n' << "8-Матрицы" << endl;
    int a, d;
    int c;
    cin >> c;

    if (c > 8) {
        cout << "Ошибка.Выберите один из предоставленных вариантов." << endl;
    } else {
        cout << "Действие выбрано." << endl;
    }
    if (c == 1) {

        cout << "Введите первый множитель: " << endl;
        int s;
        cin >> s;
        cout << "Введите второй множитель: " << endl;
        int g;
        cin >> g;
        cout << "Ответ: " << endl;
        cout << s * g << endl;
        system("pause");
    }
    if (c == 2) {

        cout << "Введите первое слагаемое: " << endl;
        int n;
        cin >> n;

        cout << "Второе слагаемое: " << endl;
        int p;
        cin >> p;
        cout << "Ответ: " << endl;
        cout << n + p << endl;
        system("pause");
    }

    if (c == 3) {

        cout << "Введите уменьшаемое: " << endl;
        int l;
        cin >> l;

        cout << "Введите вычитаемое: " << endl;
        int k;
        cin >> k;
        if (k > l) {
            cout << "Ошибка.Вычитаемое не может быть больше уменьшаемого." << endl;
        } else {

            cout << "Ответ: " << endl;
            cout << l - k << endl;
            system("pause");
        }
    }

    if (c == 4) {

        cout << "Введите делимое: " << endl;
        int w;
        cin >> w;

        cout << "Введите делитель: " << endl;
        int y;
        cin >> y;

        cout << "Ответ: " << endl;
        cout << w / y << endl;
    }
    if (c == 5) {

        int h, j;
        cin >> h;
        j = 1;
        for (int i = 1; i <= h; i++) {
            j *= i;
        }
        cout << "Ответ: " << endl;
        cout << j;

        system("pause");

    }
    if (c == 6) {

        double a, b;
        cout << "Возведения числа в степень." << endl;
        cout << "Введите число: " << endl;
        cin >> a;
        cout << "Введите степень: " << endl;
        cin >> b;
        cout << "Ответ: " << pow(a, b) << endl;


    }
    if (c == 7) {
        cout << "Введите логарифм :" << endl;
        cout << "1 десятичный : " << endl;
        cout << "2 натуральный :" << endl;
        cin >> d;
        switch (d) {
            case 1:
                float s;
                cout << "Введите число :" << endl;
                cin >> a;
                s = log10(a);
                cout << "Ответ := " << s << endl;
                break;
            case 2:
                cout << "Введи число :" << endl;
                cin >> a;
                s = log(a);
                cout << "Ответ :" << s << endl;
                break;
        }

    }
    if (c == 8) {
        int matrix1[3][3];
        int matrix2[3][3];

        std::cout << "Введите первую матрицу :" << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int n;
                std::cin >> n;
                matrix1[i][j] = n;
            }
        }
        std::cout << "Первая матрица :" << '\n';

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << matrix1[i][j] << "\t";
            }
            cout << "\n";
        }

        cout << "Введите вторую матрицу :" << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int n;
                cin >> n;
                matrix2[i][j] = n;
            }
        }

        cout << "Вторая матрица :" << '\n';
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix2[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "Сумма матриц :" << "\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                cout << matrix1[i][j] + matrix2[i][j] << "\t";
            }

        return 0;
    }
}