#include <iostream>
#include <cmath>
using namespace std;

class TEAM1
{
    public:
    int first()
    {
     int n, input, completion = 1,cycle = 0,output =0,sum =0;
     cout << "===ВЫ ЗАПУСТИЛИ ФУНКЦИЮ КОМАНДЫ 1==="<< endl;
     cout << "введите количество чисел"<< endl; 
     cin >> n; 
      const int size= n;
     int numbers [size];
     while (completion <= n)
     {
        cout << "введите число" << endl;
        cin >>  input;    
        numbers [cycle] = input;
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