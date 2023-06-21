#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a = 0.0;
    float b = 0.0;
    float r = 0.0;
    char o;

    cout << "Консольный калькулятор" << endl << endl;
    cout << "Пожалуйста, введите операцию для выполнения."<< endl <<"Формат: a + b | a - b | a * b | a / b"  << endl;

    Calculator cal;
    while (true)
    {
        cin >> a >> o >> b;
        r = cal.Calculate(a, b, o);
        cout << "Результат: " << r << endl;
    }

    return 0;
}