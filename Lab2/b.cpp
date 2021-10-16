#include <bits/stdc++.h>
using namespace std;
struct node{
    string val;
    node *next;
    int cnt;
    node(string x){
        val = x;
        next = NULL; 
        cnt = 1;
    }

};
class Linkedlist{
    node *head, *last;
public: 
    Linkedlist(){
        head = NULL;
    }
    void push_back(string val){
        node * newNode = new node(val);
        node * last = head;
        if(head == NULL){
            head = newNode;
            return;
        }
        while(last->next != NULL && last->val != val){
            last = last->next;
        }
        if(last->val == val){
            last->cnt++;
            return;
        }
        last->next = newNode;
        return;
 }
    void print(){
        node * last = head;
        while(last != 0){
            cout << last -> val << " " << last -> cnt << endl;
            last = last -> next;
        }
    }
    void sort(){
        node *cur = head;
        node *index = NULL;
        int tcnt;
        string tval;
        while(cur != NULL){
            index = cur -> next;
            while(index != NULL){
                if(index -> val < cur -> val ){
                    tcnt = index -> cnt;
                    index -> cnt = cur -> cnt;
                    cur -> cnt = tcnt;
                    tval = index -> val;
                    index -> val = cur -> val;
                    cur -> val = tval;
                }
                index = index -> next;
            }
            cur = cur -> next;
        }
    }
    void sort2(){
        node *cur = head;
        node *index = NULL;
        int tcnt;
        string tval;
        while(cur != NULL){
            index = cur -> next;
            while(index != NULL){
                if(index -> cnt < cur -> cnt ){
                    tcnt = index -> cnt;
                    index -> val = cur -> val;
                    cur -> val = tval;
                    tcnt = index -> cnt;
                    index -> cnt = cur -> cnt;
                    cur -> cnt = tcnt;
                }
                index = index -> next;
            }
            cur = cur -> next;
        }
    }
};

int main(){
    string s;
    Linkedlist l;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(cin >> s){
        l.push_back(s);
    }
    l.sort2();
    l.print();
return 0;
}


/*
while(cur != NULL){
            index = cur -> next;
            while(index != NULL){
                if(index -> val < cur -> val ){
                    tcnt = index -> cnt;
                    index -> cnt = cur -> cnt;
                    cur -> cnt = tcnt;
                    tval = index -> val;
                    index -> val = cur -> val;
                    cur -> val = tval;
                }
                index = index -> next;
            }
            cur = cur -> next;
        }

        */