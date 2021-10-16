#include <bits/stdc++.h>
using namespace std;

class Heap{
    vector <int> h;
    int size;
    

public:
    Heap(){
        size = 0; 
        h.push_back(-1); 
    }


    int left(int i){
        return i*2;
    }
    int right(int i){
        return i*2+1;
    }
    int parent(int i){
        return i/2;
    }

    void add(int x){
        h.push_back(x);
        ++size;
        int i = size;
    }
    int shift_up(int in, int val){
        h[in] = h[in] + val;
        while(in > 1 && h[in] > h[parent(in)]){
            swap(h[in], h[parent(in)]);
            in = parent(in);
        }
        return in;
    }
    void print(){
        for(int i = 1; i < h.size(); i++){
            cout << h[i] << endl;
        }
    }
    
};
int main(){
    Heap hp;
    int s;
    cin >> s;
    int n;
    for(int i = 0; i < s; i++){
        cin >> n;
        hp.add(n);
    }
    int op, in, val;
    cin >> op;
    for(int j = 0; j < op; j++){
        cin >> in >> val;
        cout << hp.shift_up(in, val) << endl;
    }
    hp.print();
}