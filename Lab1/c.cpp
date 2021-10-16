#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> q;
    string s;
    int n;
    while(cin >> s){
        if(s == "push_front"){
            cin >> n;
            q.emplace_front(n);
            cout << "ok" << endl;
        }
        if(s == "push_back"){
            cin >> n;
            q.push_back(n);
            cout << "ok" << endl;
        }
        else if(s == "pop_front"){
            if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.front() << endl;
                q.pop_front();
            }
        }
        else if(s == "pop_back"){
            if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.back() << endl;
                q.pop_back();
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
        else if(s == "back"){
            if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.back() << endl;
            }
        }
        else if(s == "size"){
            cout << q.size() << endl;
        }
        else if(s == "clear"){
            while(!q.empty()){
                q.pop_back();
            }
            cout << "ok" << endl;
        }
        else if(s == "exit"){
            cout << "bye";
            return 0;
        }

    }
}
