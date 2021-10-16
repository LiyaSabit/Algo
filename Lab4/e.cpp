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
    void leaf(node *cur){
        if(cur == NULL){
            return;
        }
        leaf(cur -> left);
        if(cur -> left == NULL && cur -> right == NULL){
            cout << cur -> val << endl;
        }
        leaf(cur -> right);
        return;
    }
public:
    BST(){
        cur = NULL;
    }
    void insert(int val){
        cur = insert(cur, val);
    }
    /*void printAsc(){
        inOrder(cur);
    }*/
    void leaves(){
        leaf(cur);
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
    tree.leaves();
}