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
        while(i > 1 && h[i] > h[parent(i)]){
            swap(h[i], h[parent(i)]);
            i = parent(i);
        }
    }
    int max_child(int i){
        if(left(i) <= size && right(i) <= size){
            if(h[left(i)] < h[right(i)]){
                return right(i);
            }
            else if(h[left(i)] == h[right(i)]){
                return left(i);
            }
            else{
                return left(i);
            }
        }
        else if(left(i) <= size){
            return left(i);
        }
        else{
            return -1;
        }
    }
    int shift_down(int in, int val){
        h[in] = h[in] - val;
        while(max_child(in) != -1 && h[in] < h[max_child(in)]){
            int mcpos = max_child(in);
            swap(h[in], h[max_child(in)]);
            in = mcpos;
        }
        return in;
    }
    void print(){
        for(int i = 1; i < h.size(); i++){
            cout << h[i] << " ";
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
        cout << hp.shift_down(in, val) << endl;
    }

    hp.print();

    return 0;
}