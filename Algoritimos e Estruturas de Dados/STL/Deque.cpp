/*
Deque:

double-ended queue is sequence containers ith dynamic sizes that can be expanded or contracted on both ends
(front or back)

daques are not guaranteedto store all its elemenst in contiguous storage locations: accessing elements in a
deques by offsetting a pointer to another element causes undefined behavior.

Elements of a deque can be scattered in different chunks of storage

*/


#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq(10);

    for(int i=0; i<10; i++)
    {
        dq[i] = i*i;
    }

    cout << "Size" << endl;
    cout << dq.size() <<endl;

    //dq.push_back(123);
    //dq.push_front(123);

    for(int i=0; i<10; i++)
    {
        cout << dq[i] << " ";
    }

    return 0;
}
