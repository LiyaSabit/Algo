#include <bits/stdc++.h>
using namespace std;
int cnt;
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
            cnt ++;
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
};
int main(){
    BST tree;
    int x;
    cin >> x;
    while(x != 0){
        tree.insert(x);
        cin >> x;
    }
    cout << cnt;
}