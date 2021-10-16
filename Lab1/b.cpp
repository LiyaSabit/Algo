#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    string s;
    int n;
    while(cin >> s){
        if(s == "push"){
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if(s == "pop"){
            if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if(s == "front"){
            if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.front() << endl;
            }
        }
        else if(s == "size"){
            cout << q.size() << endl;
        }
        else if(s == "clear"){
            while(!q.empty()){
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if(s == "exit"){
            cout << "bye";
            return 0;
        }

    }
}
