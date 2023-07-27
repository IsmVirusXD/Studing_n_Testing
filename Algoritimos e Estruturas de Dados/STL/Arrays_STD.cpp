/*
Arrays: Colection of some kind of data
*/


#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void updateArray(array<int,8> &xarr,int i ,int val)
{
    xarr[i] = val;
}

void printArray(const array<int,8> &arr)
{
    for(int x: arr)
    {
        cout << x <<" ";
    }
    cout << "\n";
}

int main(){

    array<int,8> arr = {1,2,3,16,70,6,7,8};

    updateArray(arr,0,100);
    printArray(arr);

    sort(arr.begin(),arr.end());
    printArray(arr);

    array<int,8> five;
    five.fill(5);

    printArray(five);

    return 0;
    }
