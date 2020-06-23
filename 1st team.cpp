#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class TEAM1
{
    public:
    
    bool is_digits(const string &str) {
    return str.find_first_not_of("0123456789.") == string::npos;}
    bool is_digits1(const string &str) {
    return str.find_first_not_of("0123456789") == string::npos;}
    

    float first()
    {
      string n,input = "0";
     float n1,input1,sum = 0;
     int cycle = 0,completion = 1,output = 0;
     cout << "===ВЫ ЗАПУСТИЛИ ФУНКЦИЮ КОМАНДЫ 1==="<< endl;
     cout << "введите количество чисел"<< endl; 
     cin >> n; 
     if (is_digits1(n)) // только цифры
    {
     string::size_type sz;
     n1 = stof (n, &sz); 
    }
    else  // есть знаки
    {
        cout << "Вы написали не число или использовали неверный синтаксис >:(" << endl;
        return 0;
    }
    const int size = n1;
     float numbers [size];
     while (completion <= n1)
     {
        cout << "введите число" << endl;
        cin >>  input;
        if (is_digits(input)) // только цифры
        {
         string::size_type sz;
         input1 = stof (input, &sz); 
        }
        else  // есть знаки
        {
            cout << "Вы написали не число или использовали неверный синтаксис >:(" << endl;
            return 0;
        }
        numbers [cycle] = input1;
        cycle++;
        completion++;
     }
      while (output < size)
     {
        cout << "куб "<< output+1 << " числа = "<< pow(numbers [output],3) << endl;
        sum=sum+pow(numbers [output],3);
        output++;
     }
     cout << "сумма = " << sum << endl;
     return sum;
    }
};