//Fila
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> fila;

    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);

    while(!fila.empty())
    {
        cout << fila.front() << " ";
        fila.pop();

    }

    return 0;
}
