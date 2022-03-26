// day 55 out of 100

#include <iostream>
#include <bits/stdc ++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{

    Node *new node = newnode();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void deletep(Node **head_ref, int p)
{

    if (*head_ref == NULL)
    {
        return;
    }

    Node *temp = *head_ref;
}

int main()
{

    return 0;
}
