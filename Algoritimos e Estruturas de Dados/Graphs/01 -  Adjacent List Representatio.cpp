#include <bits/stdc++.h>

using namespace std;

/*
The Graph

    0 ---- 1 --- 2
    |            |
    |            |
    |            |
    4 ---- 3 -----
    |      |
    |      |
    |      |
    5 -----

*/

class Graph {
    int V; //Numbers of Nodes
    list<int> *l; //Declaration

public:
    Graph(int v){
        //Constructor function
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool undir=true)
    {
        //Adding a Relationship between 2 nodes by AdjacentList
        l[i].push_back(j);
        if(undir)
        {
            l[j].push_back(i);
        }
    }

    void printAdjList(){
        //Print all the conections
        for(int i=0;i<V;i++)
        {
         cout<<i<<" --> ";
         //Every element of ith linked list
             for(auto node:l[i])
             {
               cout << node << ",";
             }
         cout<< endl;
        }


    }
};

int main(){
    Graph g(6); //Creating the Graph
    //Adding Relationship
    g.addEdge(0,1); // Node 0 ---> Node 1
    g.addEdge(0,4); // Node 0 ---> Node 4
    g.addEdge(2,1); // Node 2 ---> Node 1
    g.addEdge(3,4); // Node 3 ---> Node 4
    g.addEdge(4,5); // Node 4 ---> Node 5
    g.addEdge(2,3); // Node 2 ---> Node 3
    g.addEdge(3,5); // Node 3 ---> Node 5

    g.printAdjList();

    return 0;

}
