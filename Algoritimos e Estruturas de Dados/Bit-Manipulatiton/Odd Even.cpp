 //Write a expression to check if a number is odd or even!


#include<iostream>

using namespace std;

bool odd_even(int num)
{
    // Metodo Usual
    // Explicação: Dividimos um numero por 2 se o resto da divisão for 0 então o numero é par

    if(num%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool odd_even_Binary(int num)
{
    // Metodo Binario
    // Explicação: A ultima posição do Binario[2^0] for 1 o numero é impar

    if(x&1){
        return true;
    }
    else{
        return false;
    }

}


int main(){

    int n = 0;
    cin >> n;

    if(odd_even(n)){
        cout << "Par";
    }
    else
    {
        cout << "Impar";
    }

    return 0;
}
