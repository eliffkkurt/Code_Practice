
# StringStream
# https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function


vector<int> vect;
    stringstream ss(str);

    int number; 
    char character; 

    while(ss>>number) {
        vect.push_back(number);
        ss>>character; 
    }
    return vect;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
