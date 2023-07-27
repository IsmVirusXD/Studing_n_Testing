/*
Large Factorial

Given a Big Integerm find its factorial which may be large and may not fit into integer

Input
100

Output
9332621544394415268169923885626670049071596826438162146859296389521
7599993229915608941463976156182862536979208272237582511852100168640
00000000000000000000000

*/

/* Aproach:
1 - Usaremos um Array para colocar dentro

*/

#include<iostream>
using namespace std;


void multiply(vector<int> &a, int no, int &size)
{
    int carry = 0;
    for(int i=0; i < size; i++)
    {
        int product = a[i] * no + carry;
        a[i] = product % 10;
        carry = produc / 10;
    }

    //to handle the carry
    while(carry)
    {
        a[size] = carry % 10;
        carry = carry/10;
        size = size + 1;
    }

}


void bigFactorial(int n)
{
    vector<int> a(1000,0);
    a[0] = 1;
    int size = 1;

    for(int i=2;i<=n;i++)
    {
        multiply(a,i,size);
    }

    //Print the result in the Reverse Order
    // Size - 1 to 0
}

int main(){

    int n;
    cin >> n;

    bigFactorial(n);

    return 0;
}
