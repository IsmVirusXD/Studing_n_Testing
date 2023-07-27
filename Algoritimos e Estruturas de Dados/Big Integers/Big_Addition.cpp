/*
Large Addition

Given two large numbers. The numbers may not not fit into long long int, the task is to add these
two numbers.

Exemplo:

str1 = "3333311111111111"
str2 = "44422222221111"

Output
3377733333332222
*/


/*
Aproach: Papel e Caneta1
1. Invertemos os dois arrays
2. Começamos a dividir a string de forma a trabalhar com as unidades vez por vez
3.

- Sempre deixe o mmaior numero em primeiro

*/
#include<iostream>
#include<algorithm>
using namespace std;

char digitToChar(int digit)
{
    return digit + '0';
}

int charToDigit(char ch)
{
    return ch - '0';
}

string addNumbers(string n1, string n2){

    //make sure the N2 is larger
    if(n1.length() > n2.length())
    {
       swap(n1,n2);
    }
    //Result
    string result = "";

    //Reverse
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());

    int carry = 0;

    //Add digit upto a n1.lenght()
    for (int i=0; i< n1.length(); i++)
    {
        int d1 = charToDigit(n1[i]);
        int d2 = charToDigit(n2[i]);
        int sum = d1 + d2 + carry;
        int output_digit =  sum % 10;
        carry = sum/10;

        result.push_back(digitToChar(output_digit));
    }

    for(int i = n1.length(); i < n2.length(); i++)
    {
        int d2 = charToDigit(n2[i]);
        int sum = d2 + carry;
        int output_digit = sum % 10;
        carry = sum/10;
        result.push_back(digitToChar(output_digit));
    }

    //Fanally if a carry is generated
    if(carry)
    {
        result.push_back('1');
    }

    // Reverse the final result
    reverse(result.begin(), result.end());
    return result;
}



int main()
{
    //String
    string s1,s2;

    cin >> s1 >> s2;

    string result = addNumbers(s1,s2);

    cout << result << endl;

    return 0;
}
