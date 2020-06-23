#include <iostream>
#include <cmath>
using namespace std;


class TEAM2
{
public:

    bool is_digits(const string &str) {
    return str.find_first_not_of("0123456789.") == string::npos;}
    
    float second()
    {
    string number1, number2, number3, degree;
    float n1, n2, n3, d1, sum;
    string::size_type sz;
    cout << "===ВЫ ЗАПУСТИЛИ ФУНКЦИЮ КОМАНДЫ 2==="<< endl;
    cout << "введите первоe число " << endl;
    cin >> number1;
    if (is_digits(number1)) // только цифры
     {
        n1 = stof (number1, &sz); 
     }
    else  // есть знаки
     {
        cout << "Вы написали не число или использовали неверный синтаксис >:(" << endl;
        return 0;
     }
        
        cout << "введите второе число " << endl;
        cin >> number2;
        if (is_digits(number2)) // только цифры
     {
        n2 = stof (number2, &sz); 
     }
    else  // есть знаки
     {
        cout << "Вы написали не число или использовали неверный синтаксис >:(" << endl;
        return 0;
     }
        cout << "введите третье число " << endl;
        cin >> number3;
        if (is_digits(number3)) // только цифры
     {
        n3 = stof (number3, &sz); 
     }
    else  // есть знаки
     {
        cout << "Вы написали не число или использовали неверный синтаксис >:(" << endl;
        return 0;
     }
        cout << "степень " << endl;
        cin >> degree;
        if (is_digits(degree)) // только цифры
     {
        d1 = stof (degree, &sz); 
     }
    else  // есть знаки
     {
        cout << "Вы написали не число или использовали неверный синтаксис >:(" << endl;
        return 0;
     }
        
        sum = pow((n1 + n2 + n3), d1);
        cout << "сумма = " << sum;
        return sum;
    }
};

