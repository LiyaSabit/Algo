#include <bits/stdc++.h>
using namespace std;
int cnt1;
int cnt2;
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
    int depth(node *cur){
        if(cur == NULL){
            return 0;
        }
        int left = depth(cur -> left);
        int right = depth(cur -> right);
        return max(left, right)+1;

    }
    
public:
    BST(){
        cur = NULL;
    }
    void insert(int val){
        cur = insert(cur, val);
    }
    //void printAsc(){
    //    inOrder(cur);
    //}
    int depth(){
        return depth(cur);
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
    cout << tree.depth();
}