/*#include <bits/stdc++.h>
using namespace std;
vector <int> v;
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

   
    void max(node *cur){
        if(cur == NULL){
            return;
        }
        max(cur -> right);
        v.push_back(cur -> val);
        max(cur -> left);
        // max(cur -> left);
        return;
    }
public:
    BST(){
        cur = NULL;
    }
    void insert(int val){
        cur = insert(cur, val);
    }
    void maxi(){
        max(cur);
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
    tree.maxi();
    cout << v[1];
}*/
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
    int cnt;
    int secondmax;
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

    void SecondMax(node *cur){
        if(cur -> right != NULL){
            SecondMax(cur -> right);
        }
        ++cnt;
        if(cnt == 2){
            secondmax = cur -> val;
            return;
        }
        if(cur -> left != NULL){
            SecondMax(cur -> left);
        }
        
    }

public:
    BST(){
        cur = NULL;
        cnt = 0;
        secondmax = 0;
    }
    void insert(int val){
        cur = insert(cur, val);
    }
    int secondMax(){
        SecondMax(cur);
        return secondmax;
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
    cout << tree.secondMax();
}