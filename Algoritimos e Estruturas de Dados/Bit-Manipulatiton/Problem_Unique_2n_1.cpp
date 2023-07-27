/*
Unique 2N+1

Unique Number, given 2N + 1 numbers where every number comes twice experct one number.
Find out that unique number.

Exemplo:
N = 4 | 2N + 1 = 9
{3,2,5,5,1,2,6,3,1} 6 é o unico numero sozinho

*/


/* Approach 1: For-loop
Complexidade: O(N²) Time | O(1) Space
1.Pega o primeiro valor checa todo o Array de numeros
2.Caso encontre algum elemento igual, ignora e volta para o item 1 com o proximo da lista.
3.Caso não encntre nada então esse é o Resultado.
*/

/* Approach 2: Frequency Table / Hash Map
Complexidade: O(N) Time | O(N) Space
1.Montar uma Hash Map ir adicionando os valores do Array no Hash map
2.A frequencia de cada elemento vai somar em 1 o valor da posição referente aquele valor
3.Retornar o index daquele que tiver frequencia 1
*/

/*Approach 3: XOR
Complexidade: O(N) Time  O(1) Space
1.A opreação Xor ela retorna 0 quando os valores são identicos, dessa forma podemos colocar
todos os valores da lista em um grande xor e o resultado vai ser o resultado

*Os valores similares vão se cancelar por causa do Xor por isso não importa o tamanho nem a
distribuição*

*/

#include<Iostream>
#include<array>

using namespace std;

int main()
{
    array<int,9> a = {3,2,5,5,1,2,6,3,1};
    int unico = 0;
    for(int i = 0; i<a.size(); i++)
    {
        unico = unico ^ a[i];
    }
    cout << unico << endl;

    return 0;
}
