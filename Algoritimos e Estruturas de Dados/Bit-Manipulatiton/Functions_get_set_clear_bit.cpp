#include<iostream>
using namespace std;

//Functions
int getIthBit(int n, int i)
{
    int mask = (1<<n);
    n = (n|mask);
}

int setIthBit(int &n, int i)
{
    int mask = ~(1<<i);
    n = n & mask;
}

int updateIthBit(int &n, int i,int v)
{
    clearIthBit(n,i);
    int mask = (1<<i);
    n = n|mask;
}


int clearLastIBits(int &n, int i)
{
        int mask = (-1 << 1);
        n = n & mask;
}

int main()
{
    int n = 5;
    int i = 2;
   //cin >> i;

    //cout << getIthBit(n,i) << endl;
    //setIthBit(n,i);
    //ckearIthBit(n,i);
    //updateIthBit(n,i,1);
    clearLastIBits(n,1,0);

}
