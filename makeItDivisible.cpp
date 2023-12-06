#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string solve(int n) {
    if(n == 1)
        return "3";
        
    string ans = "1";
    for(int i=0; i<n-2; i++)
        ans += "0";
    ans += "5";
    
    return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    
	    cout << solve(n) << endl;
	}
	return 0;
}