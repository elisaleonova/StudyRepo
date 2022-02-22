// StudyC++Project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <memory>
#include "Calculator.h"
using namespace std;

int main()
{
    double x = 0;
    double y = 0;
    double res = 0;
    char oper = '+';
    cout << "Calculator Console Application\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n";
    
    shared_ptr<Calculator> calc(new Calculator());
    //Calculator calc;
    while (true) 
    {
        cin >> x >> oper >> y;
        if (y == 0 && oper == '/') {
            cout << "Division by zero exeption\n";
            continue;
        }
        else
        {
            //res = calc.Calculate(x, oper, y);
            res = calc->Calculate(x, oper, y);
        }
        cout << "Result is:" << res << "\nPlease enter the operation to perform. Format: a+b | a-b | a*b | a/b\n";
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
