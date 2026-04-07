#include <iostream>
#include <vector>
#include <string>   // для работы со строками

using namespace std;

int main() {
   
    setlocale(LC_ALL, "rus"); // перевод на русский
    // Исходная строка
    string str = "ADCHSLLAS, AKSL";

    // Создаём пустой вектор символов
    vector<char> chars;

    // Проходим по каждому символу строки и добавляем его в вектор
    for (char c : str) {
        chars.push_back(c);   // добавляем в конец вектора
    }

    // Выводим содержимое вектора
    cout << "Вектор символов: ";
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    // Также можно вывести без пробелов (как строку)
    cout << "Как строка: ";
    for (char c : chars) {
        cout << c;
    }
    cout << endl;

    return 0;
}
