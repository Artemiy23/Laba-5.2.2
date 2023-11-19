#include <iostream>
#include <clocale>

using namespace std;
/*
*   Программа получает на вход заданный динамический 
*   массив и осуществляет сдвиг элементов массива вправо 
*   на одну позицию, а первый элемент полученного массива 
*   становится 0.
*/
int main () {
    setlocale(LC_ALL, "ru_Ru.utf-8");
    
    double *arr;
    size_t size;

    cout << "Введите размер массива: ";
    cin >> size;
    if (size == 0) {
        cerr << "Ошибка: размер массива не может быть меньше или равен нулю";
        return 1;
    }
    arr = new double[size];

    cout << "Заполните массив числами:" << endl;
    for (size_t i = 0; i < size; i++) {
        cout << i + 1 << ". ";
        cin >> arr[i];
    }
    
    double buffer1 = arr[0];
    arr[0] = 0;
    cout << "[" << arr[0];
    for (size_t i = 1; i < size; i++) {
        double elem = arr[i];
        double buffer2 = elem;
        elem = buffer1;
        buffer1 = buffer2;
        cout << ", "<< elem;
    }
    cout << "]";
    return 0;
}