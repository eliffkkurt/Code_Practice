
# Lower Bound-STL
# https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n,t,q,a_query;
    cin>>n;
    vector<int> vect;

    while(n>0){
        cin>>t;
        n--;
        vect.push_back(t);
    }

    vector<int>::iterator low, up;


    cin>>q;
    for (int i=0;i<q;i++)
    {
        cin>>a_query;
        low=lower_bound (vect.begin(),vect.end(),a_query);

        if(binary_search(vect.begin(), vect.end(),a_query))
        {
            cout<<"Yes ";
        }

        else
        {
            cout<<"No ";
        }

        cout << (low- vect.begin()+1) << '\n';

    } 
    return 0;
}

