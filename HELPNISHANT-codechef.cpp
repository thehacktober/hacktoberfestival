#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int t, k, left;
	cin >> t;
	
	while(t--)
	{
	    cin >> k;
	    vector <long long int> v;
	    
	    left = k;
	    v.push_back(k);
	    
	    while((v.back() * 2 - left) > 1) 
	    {
	        v.push_back(v.back() * 2 - left - 1);
	        left = v[v.size() - 2];
	    }
	    
	    cout << 2 * v.size() << "\n";
	}
	return 0;
}
