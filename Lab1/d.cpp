#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    deque<string> nine;
    deque<string> ten;
    deque<string> eleven;
    while(cin >> n){
        if(n == 9){
            cin >> s;
            nine.push_back(s);
        }
        else if(n == 10){
            cin >> s;
            ten.push_back(s);
        }
        else if(n == 11){
            cin >> s;
            eleven.push_back(s);
        }
    }
    for(int i = 0; i < nine.size(); i++){
        
        cout << 9 << " " << nine[i] << endl;
    }
    for(int i = 0; i < ten.size(); i++){
        
        cout << 10 << " " << ten[i] << endl;
    }
    for(int i = 0; i < eleven.size(); i++){
        
        cout << 11 << " " << eleven[i] << endl;
    }
    return 0;
}