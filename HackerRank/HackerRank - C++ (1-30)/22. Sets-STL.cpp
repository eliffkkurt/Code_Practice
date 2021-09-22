
# Sets-STL
# https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
        int q; //number of queries
    cin>>q;
    int x, y;
    set<int> s;
    set<int>::iterator itr;

    for (int i=0; i<q; i++)
    {
        cin>>y;
        cin>>x;

        if (y==1)
        {
            s.insert(x);
        }

        else if (y==2)
        {
            s.erase(x);
        }

        else if (y==3)
        {
            itr=s.find(x);
            if (itr!=s.end())
            {
                cout<<"Yes\n";
            }

            else
                cout<<"No\n";
        }

    }
    
    
    
    return 0;
}



