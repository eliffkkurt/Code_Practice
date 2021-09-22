
# Variable Sized Arrays
# https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int n,q,size,value, which, index;
    cin>>n>>q;

    vector<vector <int>> vect;

    for (int i=0;i<n;i++)
    {
        cin>>size; 
        vector<int> vector_i;

        for (int j=0; j<size; j++) 
        {
            cin>>value;
            vector_i.push_back(value);
        }

        vect.push_back(vector_i);
    }

    for (int k=0;k<q;k++)
    {
        cin>>which>>index;
        cout<<vect[which][index]<<endl;
    }
    return 0;
}

