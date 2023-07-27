/*
Unique 3N+1

Unique Number - Given 3N + 1 NUmbers, where every number is coming thrice except one number
find that unique number.

Exemplo:
N = 2 | 3N + 1 = 7

{5,2,5,3,5,2,2}

*/

/* Aproach 1: Frequency table
Complexidade: O(N) Time | O(N) Space
1.Montar uma Hash Map ir adicionando os valores do Array no Hash map
2.A frequencia de cada elemento vai somar em 1 o valor da posição referente aquele valor
3.Retornar o index daquele que tiver frequencia 1
*/

/* Approach 2:
Complexidade:  Time |  Space
1.Agrupoamos todos em colunas
2.Somamos todos os bit de cada coluna
3.Os resultados vão dar todos igauis exeto 1 ao qual sera menor
4.Subtraindo ele das outras colunas e vc achara o resultado
*/

#include<Iostream>
#include<array>
#include<vector>

using namespace std;

void updateSum(vector<int> &sumArr, int x)
{
    //Extractall bits of X
    for(int i=0; i<32; i++)
    {
        int ith_bit = x & (1<<i);
        if(ith_bit){
            sumArr[i]++;
        }
    }
}

int numFromBits(vector<int> sumArr)
{
    //Convertendo o numero binario para Integer
    int num = 0;
    for(int i=0; i<32; i++)
    {
        num += (sumArr[i] * (1<<i));
    }
    return num;
}

int uniqueNo3(vector<int> arr)
{
    vector<int> sumArr(32,0);
    for(int x : arr)
    {
        updateSum(sumArr,x);
    }

    for(int i=0; i<32; i++)
    {
        //a Divisão por um numero N representada o numero de repetiçoes
        sumArr[i] = sumArr[i]%3;
    }
    return numFromBits(sumArr);
}

int main()
{
    //XOR primeiro
    vector<int> arr = {1,3,5,4,3,1,5,5,3,1};
    cout << uniqueNo3(arr);

    return 0;
}
