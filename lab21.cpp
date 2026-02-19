#include <iostream>
#include <bitset>
#include <string>

using namespace std;

// Вывод IP-адреса в десятичном и двоичном виде
 double di(const string& name, int a, int b, int c, int d) {
    cout << name << " (десятичный): "
        << a << "." << b << "." << c << "." << d << endl;
    cout << name << " (двоичный):   "
        << bitset<8>(a) << "."
        << bitset<8>(b) << "."
        << bitset<8>(c) << "."
        << bitset<8>(d) << endl;
    return 0;
}

int main() {
    setlocale(LC_ALL, "rus");
    // Исходные данные (вариант 6)
    int A1 = 192, A2 = 168, A3 = 6, A4 = 1;
    int B1 = 172, B2 = 16, B3 = 33, B4 = 4;
    int C1 = 255, C2 = 255, C3 = 255, C4 = 0;

    cout << "Исходные данные:" << endl;
    di("A", A1, A2, A3, A4);
    di("B", B1, B2, B3, B4);
    di("C", C1, C2, C3, C4);
    cout << endl;

    // Результаты поразрядного умножения (AND)
    int resA1 = A1 & C1;
    int resA2 = A2 & C2;
    int resA3 = A3 & C3;
    int resA4 = A4 & C4;

    int resB1 = B1 & C1;
    int resB2 = B2 & C2;
    int resB3 = B3 & C3;
    int resB4 = B4 & C4;

    cout << "Результаты поразрядного умножения (AND):" << endl;
    di("A & C", resA1, resA2, resA3, resA4);
    di("B & C", resB1, resB2, resB3, resB4);
    cout << endl;

    // Сравнение результатов
    bool equal = (resA1 == resB1) && (resA2 == resB2) && (resA3 == resB3) && (resA4 == resB4);
    cout << "Сравнение результатов (True - равны, False - не равны):" << endl;
    cout << "Результат: " << (equal ? "True" : "False") << endl;

    return 0;
}