#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
	while (b) {
		a %= b;
		swap (a, b);
	}
	return a;
}
int lcm (int a, int b) {
	return a / gcd (a, b) * b;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << lcm(n, m);
    return 0;
}
