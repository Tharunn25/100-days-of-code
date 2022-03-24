// day 53 out of 100

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node()
{
public:
    int data;
    Node *next;
};

void push(Node *head_ref, int new_data)
{

    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void insert_in_between(Node *prev_node, int new_data)
{

    /*if(prev_node = NULL){
        cout<<"The previous node data can't be null";
        return;
    }*/

    Node *new_node = new_Node;

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void print_linked_list(Node *node)
{
    while (node = NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

int main()
{

    return 0;
}
