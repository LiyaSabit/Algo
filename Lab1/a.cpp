#include <bits/stdc++.h>//Check it, please
using namespace std;
int main(){
    stack<int> q;
    string s;
    int n;
    while(cin >> s){
        if(s == "size"){
            cout << q.size() << endl;
            }
        else if (s == "push"){
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if( s == "back"){
            if(q.size()!=0){
                cout << q.top() << endl;}
            else{
                cout << "error" << endl;
            }
        }
        else if( s == "pop"){
            if(q.size() != 0){
                cout << q.top() << endl;
                q.pop();
            }
            else{
                cout << "error" << endl;
            }
        }
        else if(s == "clear"){
            while(!q.empty()){
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if(s == "exit"){
        cout << "bye" ;
        break;
        }
}
}