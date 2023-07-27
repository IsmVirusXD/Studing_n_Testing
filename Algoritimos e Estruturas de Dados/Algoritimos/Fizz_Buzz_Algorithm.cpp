/*
    Fizz Buzz:

    Fizz e Buzz se referem a qualquer numero multiplo de 3 e 5 respectivamente.
        Se um numero é divisivel por 3 é subistituido por Fizz,
        Se for divisivel por 5 é subistituido por Buzz
        Se os dois forem verdadeiros então é chamado de FizzBuzz.

    É uma brincadeira de criança famosa nos EUA.

*/



#include <iostream>
#include <array>

using namespace std;

void FizzBuzz(int num)
{
    if (num % 15 == 0){
        cout << "Fizz Buzz" << std::endl;
    }
    else if (num % 5 == 0)
    {
        cout << "Buzz" << std::endl;
    } else if (num % 3 == 0)
    {
        cout << "Fizz" << std::endl;
    }
    else {
        cout << num << std::endl;
    }
}


int main()
{
    array<int,10> num;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        FizzBuzz(num[i]);
    }




}
