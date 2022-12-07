#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int FirstNumber;
    int SecondNumber;
    int sum;
    int minus;
    int prod;
    int div;
    int answer;

    char Operation;

    cout << "Введите 1-ое число" <<"\n";
    cin >> FirstNumber;
    cout << "Введите 2-ое число" << "\n";
    cin >> SecondNumber;

    cout << "Выберите одну из операций: +, -, *, /, ^" << "\n";
    cin >> Operation;
    
    if (Operation == '+')
    {
        sum = FirstNumber + SecondNumber;
        cout << "Сумма чисел = " << sum << "\n";
    }
    if (Operation == '-')
    {
        minus = FirstNumber - SecondNumber;
        cout << "Разность чисел = " << minus << "\n";
    }
    if (Operation == '*')
    {
        prod = FirstNumber * SecondNumber;
        cout << "Произведение чисел = " << prod << "\n";
    }
    if (Operation == '/')
    {
        div = FirstNumber / SecondNumber;
        cout << "Частное чисел = " << div << "\n";
    }
    if (Operation == '^')
    {
        cout << "Возведение числа " << FirstNumber << " в степень " << SecondNumber << " = " << pow(FirstNumber, SecondNumber) << "\n";
    }

    cout << "Повторить? 1 - да, 2 - нет"  "\n";
    cin  >> answer;

    if (answer ==1)
    {
        main();
    }
    else{
        return 0;
    }
    
}