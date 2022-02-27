//day 28 out of 100
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    
};

int main(){
    node*head;
    node*one=NULL;
    node*two=NULL;
    node*three=NULL;
    node*four=NULL;
    
    one=new node();
    two=new node();
    three=new node();
    four=new node();
    
    one->data=1;
    two->data=2;
    three->data=3;
    four->data=4;
    
    one->next=two;
    two->next=three;
    four->next=NULL;
    
    head=one;
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    
    
    
    
    return 0;
}