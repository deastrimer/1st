#include <iostream>
#include <cmath>
using namespace std;
class TEAM3
{
 public:
  int third()
    {
        int number1,number2,number3,sum;
        string choise;
        cout << "===ВЫ ЗАПУСТИЛИ ФУНКЦИЮ КОМАНДЫ 3==="<< endl;
        cout << "введите первоe число "<< endl;
        cin >> number1;
        cout << "введите второе число "<< endl;
        cin >> number2;
        cout << "введите третье число "<< endl;
        cin >> number3;
        cout << "выберите и введите 'умножение' или  'сложение' "<< endl;
        cin >> choise;
        if (choise == "умножение" )
        {
         sum = pow((number1*number2*number3),3); 
        } 
     else
     {sum = pow((number1+number2+number3),3);}  
     cout << "итог = " << sum;
     return sum;
    }
};