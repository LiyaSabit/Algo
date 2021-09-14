
#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
	for (int i = min(a, b); i >= 1; i--) {
		if(a %i == 0 && b % i == 0){
			return i;
		}	
	}
	return 1;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);
    return 0;
}