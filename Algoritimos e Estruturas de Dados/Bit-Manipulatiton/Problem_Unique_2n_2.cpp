/*
Unique 2N+2

Unique Numbers - Given 2N + 2 Numbers, where every nmber is coming twice except two numbers
find those two unique numbers.

Exemplo:
N = 4 | 2N + 2 = 10
{3,3,4,2,4,5,6,2} > 6 e 5 are the 2 unique numbers

*/

/* Aproach 1: Frequency table
Complexidade: O(N) Time | O(N) Space
1.Montar uma Hash Map ir adicionando os valores do Array no Hash map
2.A frequencia de cada elemento vai somar em 1 o valor da posição referente aquele valor
3.Retornar o index daquele que tiver frequencia 1
*/

/* Approach 2: Xor
Complexidade: O(N) Time | O(1) Space
1.Para esse sitema vamos colocar a lista toda dentro de um XOR,
2.Porem o resultado dessa vez não vai daum resultado unico, ele vai dar a combinação Xor dos
dois valores unicos
3.Pegamos esse valor e dividimos em 2 listas os que possue esse valor e os que não possuem.
4.Aplicamos novamente o XOR pois agora teremos um problema 2n+1
*/

#include<Iostream>
#include<array>

using namespace std;

int main()
{
    //XOR primeiro
    array<int,8> a = {3,3,4,2,4,5,6,2};
    int resultado = 0;
    for(int i = 0; i<a.size(); i++)
    {
        resultado = resultado ^ a[i];
    }

    //Achando a combinaçao dos valores Unicos
    int pos = 0;
    int temp = resultado;
    while((temp&1)==0)
    {
        pos++;
        temp == temp>>1;
    }

    //Filtrando os numeros do array que tem o bit da combinação
    int setA = 0;
    int setB = 0;
    int mask = (1<<pos);

    for(int i=0; i < a.size(); i++)
    {
        if((a[i]& mask) > 0)
        {
            setA = setA ^a[i];
        }
        else
        {
            setB = setB ^ a[i];
        }
   }

   cout << setA << endl;
   cout << setB << endl;

    return 0;
}
