 //Write a expression to check if a number is odd or even!


#include<iostream>

using namespace std;

bool odd_even(int num)
{
    // Metodo Usual
    // Explica��o: Dividimos um numero por 2 se o resto da divis�o for 0 ent�o o numero � par

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
    // Explica��o: A ultima posi��o do Binario[2^0] for 1 o numero � impar

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
