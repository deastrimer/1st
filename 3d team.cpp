#include <iostream>
#include <cmath>
using namespace std;
class TEAM3
{
 public:
  bool is_digits(const string &str) {
  return str.find_first_not_of("0123456789.") == string::npos;}
  
  
  float third()
    {
        
        string number1, number2, number3;
        float n1, n2, n3, sum;
        string::size_type sz;
        string choise;
        cout << "===ВЫ ЗАПУСТИЛИ ФУНКЦИЮ КОМАНДЫ 3==="<< endl;
        Start1:
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
        cout << "выберите и введите 'умножение' или  'сложение' "<< endl;
     
        cin >> choise;
        if (choise == "умножение" || choise == "УМНОЖЕНИЕ" || choise == "Умножение" )
        {
         sum = pow(n1,3)*pow(n2,3)*pow(n3,3);
         cout << "итог = " << sum;
        }

     else if (choise == "сложение" || choise == "СЛОЖЕНИЕ" || choise =="Сложение")
     {
        sum = pow(n1,3)+pow(n2,3)+pow(n3,3);
        cout << "итог = " << sum;
     }  
     else 
     {
         cout << "Возможно, вы не правильно ввели команду. Попробуйте еще раз и следуйте инструкции." << endl;
         goto Start1;     
     }
    
     return sum;
    
    
     
    
    }
};