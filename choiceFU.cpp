#include <iostream>
#include <cmath>
#include "1st team.cpp"
#include "2nd team.cpp"
#include "3d team.cpp"
using namespace std;

class choises
{
 public:
 int cases() 
 {
    string choise;
    int ChoiseInt;
    start:
   cout << "выберите и введите какую из функций вы хотите использовать: \n'1' для использования функции первой команды \n'2' для использования функции второй команды \n'3' для использования функции  третьей команды \n'инфо' или 'info' для получения информации о функциях"<< endl;
    cin >> choise;
    if (choise == "инфо" || choise == "info" || choise == "Info" || choise == "INFO" || choise == "info" || choise == "Инфо" || choise == "ИНФО")
        {
         ChoiseInt = 1;
        }
    else if (choise == "1" || choise == "2" ||choise == "3")
        {
         ChoiseInt = 2;
        }
    else 
        {
         ChoiseInt = 3;
        }
    switch (ChoiseInt)
     {
      case 1:
       {
        cout<< "Команда 1: \nФункция вычисляющая сумму от кубов n введённых с консоли чисел.\nКоманда 2: \nФункция вычисляющую сумму от произвольной степени введённой с консоли, для трёх чисел, также введённых с консоли \nКоманда 3: \nФункцию вычисляющая сумму или произведение от кубов , для трёх чисел, также введённых с консоли \n_____________________________ " << endl;
       goto start;
       break;
      }
      case 2:
       {  
        if (choise == "1")
        {
         TEAM1 one;
         one.first();
         return 0; 
        }
        if (choise == "2")
        {
         TEAM2 two;
         two.second();
         return 0;
        }
        if (choise == "3")
        {
         TEAM3 three;
         three.third();
         return 0;
        }
        break;
       }
      case 3:
       {  
        cout << "Возможно, вы не правильно ввели команду. Попробуйте еще раз и следуйте инструкции." << endl;
        goto start;
        break;
       }
     }
  return 0;} 
};  