
# Exceptional Server
# https://www.hackerrank.com/challenges/exceptional-server/problem


#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
        
 try{
        int result = Server::compute(A, B);
        cout << result << endl;
    }
    catch(...)
    {
        if(A<0)
        {
            cout << "Exception: A is negative\n";
        }
        else if(A>=2147483648)
        {
            cout << "Not enough memory\n";
        }
        else if(B>A){
            printf("Exception: vector::_M_range_check: __n (which is %ld) >= this->size() (which is %ld)\n",B,A);
        }
        else if(B==0){
            cout << "Other Exception\n";
        }
    }
       
	}
