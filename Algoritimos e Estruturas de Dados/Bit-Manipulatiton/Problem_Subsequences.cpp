/*
Problems Subsequences

Print all subsequences of a string using bit-masking.

*/

/* Recusive Aproach
combinações ABC: 8 cobinações
' ' - 'A' - 'B' - 'C' - 'AB' - 'AC' - 'BC' - 'ABC'

N    Numbers     Binary      A B C (subsequence)
|    0           000         0 0 0 = ' '
|    1           001         0 0 1 = 'C'
|    2           010         0 1 0 = 'B'
|    3           011         0 1 1 = 'CB'
|    4           100         1 0 0 = 'A'
|    5           101         1 0 1 = 'AC'
|    6           110         1 1 0 = 'BC'
|    7           111         1 1 1 = 'ABC'
2n-1

*/

#include<iostream>
#include<cstring>
using namespace std;


void overLaynumber(char arr[],int number)
{
    int j = 0;
    while(number > 0)
    {
        int last_bit = number & 1;
        if(last_bit)
        {
            cout<<arr[j];
        }
         j++;
         number = number >> 1;
    }

    cout<<endl;
}

void generateAllSubsequences(char arr[])
{
    int n = strlen(arr);
    for(int i=0; i < (1<<n); i++)
    {
        overLaynumber(arr,i);
    }
    return;
}


int main(){
    //Subset / Subsequence
    char arr[10000];
    cin>>arr;

    generateAllSubsequences(arr);

    return 0;
}
