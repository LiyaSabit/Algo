#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max = - 100000000;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}