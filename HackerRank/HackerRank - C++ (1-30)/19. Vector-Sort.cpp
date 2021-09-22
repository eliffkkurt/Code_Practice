
# Vector-Sort
# https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int n,t;
    cin>>n;
    vector <int> v;

    while(n>0){
        cin>>t;
        v.push_back(t);
        n=n-1;
    }

    sort(v.begin(),v.end());

    for (int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
