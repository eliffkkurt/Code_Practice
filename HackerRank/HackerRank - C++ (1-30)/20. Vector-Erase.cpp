
# Vector-Erase
# https://www.hackerrank.com/challenges/vector-erase/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
int n,t,q1,q2a,q2b;
    cin>>n;
    vector <int> vect;

    while(n>0)
    {
        cin>>t;
        n--;
        vect.push_back(t);
    }


    cin>>q1;

    vect.erase(vect.begin()+q1-1);

    cin>>q2a>>q2b;

    vect.erase(vect.begin()+q2a-1,vect.begin()+q2b-1);
    
        cout<<vect.size()<<"\n";

    for (int i:vect)
    {
        cout<<i<<" ";
    }


    return 0;
}
