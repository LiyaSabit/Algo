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
    int max_child(int i){
        if(left(i) <= size && right(i) <= size){
            if(h[left(i)] < h[right(i)]){
                return right(i);
            }
            else if(h[right(i)] == h[left(i)]){
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
    void build_heap(){
        for(int i = h.size() ; i > 0; i--){
            shift_down(i);
        }
    }
    int shift_down(int in){
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
    hp.build_heap();
    hp.print();
    return 0;
}