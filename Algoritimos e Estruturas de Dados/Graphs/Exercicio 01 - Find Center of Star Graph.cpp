//Questão 01
#include <bits/stdc++.h>
using namespace std;

void findCenter(vector<vector<int>>edges)
{
    vector<int> num((edges.size() + 1), 0);
    int c = 0;
    for(int i = 0; i < edges.size(); i++)
    {
        for(auto node:edges[i])
        {
            c++;
            num.at(node-1) += 1;
        }
    }

    int max = INT_MIN;
    int x = 0;

    for(int i = 0; i < num.size(); i++)
    {
        if(max < num.at(i))
        {
            max = num.at(i);
            x = i;
        }
    }

    cout << x + 1;



}



int main()
{
    //vector<vector<int>>edges
    //cin >> edges

    vector<vector<int>> edges {{1,2},{1,3},{4,1},{5,1}};
    findCenter(edges);

    return 0;
}
