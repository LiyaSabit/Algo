#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max = - 100000;
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
    for(int i = 1; i <= n; i++){
        if(a[i] == max){
            cout << i;
            return 0;
        }
    }
}