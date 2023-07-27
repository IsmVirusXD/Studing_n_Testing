/*
Vector:
Dynamic arrays with the ability to resize itself automatically when an element is iserted

Contigous store locations, reallocation happens when underlying array is full.

Utilizers Dynamic Memory Allocation
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v ;//(1000,0); <- start writing from v[1001]
    v.reserve(100); //<- take the first 100 slots to write a new code
    int n;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        cout << "Capacity "<<v.capacity()<<"\n Size "<<v.size() << endl;
    }


    for(int x : v)
    {
        cout << x << ' ';
    }
    return 0;
}
