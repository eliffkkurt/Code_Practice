
# Maps-STL
# https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int q;
    string x;
    int type_number,y;
    map<string,int> m;
    map<string,int>::iterator itr;
    cin>>q;

    for (int i=0;i<q;i++)
    {
        cin>>type_number;


        if (type_number==1)
        {
            cin>>x>>y;
            m[x]=m[x]+y;
        

        }

        else if (type_number==2)
        {
            cin>>x;
            m.erase(x);
        }

        else if(type_number==3)
        {
            cin>>x;
            cout<<m[x]<<"\n";
        }

    }
    return 0;
}
