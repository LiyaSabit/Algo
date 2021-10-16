#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
    node(int x){
        val = x;
        left = right = NULL;
    }
};

class BST{
    node *cur;

    node *insert(node *cur, int val){
        if(cur == NULL){
            return new node (val);//после ретерна ничего не выполнится
        }
        if(val > cur-> val){
            cur -> right = insert(cur -> right,val);
        }
        if(val < cur -> val){
            cur -> left = insert(cur -> left, val);
        }
    return cur;
    }

    /*void inOrder(node *cur){
        if(cur == NULL){
            return;
        }
        inOrder(cur -> left);
        cout << cur -> val << endl;
        inOrder(cur -> right);
        return;
    }*/
    bool balance(node *cur){
         if(abs(depth(left) - depth(right)) <= 1){
             return true;
         }
         else{
             return false;
         }
     }
    int depth(node *cur){
        if(cur == NULL){
            return 0;
        }
        int left = depth(cur -> left);
        int right = depth(cur -> right);
        if(balance(left, right) == true){
            return max(left, right)+1;
        }
        
    }
    
public:
    BST(){
        cur = NULL;
    }
    void insert(int val){
        cur = insert(cur, val);
    }
    void bal(){
        if(balance(cur) == false)
            cout << "NO";
            return;
        }
        else{
            cout << "YES";
        }
    }
    
};
int main(){
    BST tree;
    int x;
    cin >> x;
    while(x != 0){
        tree.insert(x);
        cin >> x;
    }
    tree.bal();
}
/*
1) 
*/