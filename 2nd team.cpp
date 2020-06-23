#include <iostream>
#include <cmath>
using namespace std;


class TEAM2
{
public:
    int second()
    {
        int number1, number2, number3, degree, sum;
        cout << "===ВЫ ЗАПУСТИЛИ ФУНКЦИЮ КОМАНДЫ 2==="<< endl;
        cout << "введите первоe число " << endl;
        cin >> number1;
        cout << "введите второе число " << endl;
        cin >> number2;
        cout << "введите третье число " << endl;
        cin >> number3;
        cout << "степень " << endl;
        cin >> degree;
        sum = pow((number1 + number2 + number3), degree);
        cout << "сумма = " << sum;
        return sum;
    }
};


