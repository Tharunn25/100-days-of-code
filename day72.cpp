// day 72 out of 100

// program to delete the given node in the given position

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(Node **head_ref, int position)
{

    if (*head_ref == NULL)
        return;

    Node *temp = *head_ref;

    if (position == 0)
    {

        *head_ref = temp->next;

        free(temp);
        return;
    }

    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return;

    Node *next = temp->next->next;

    free(temp->next);

    temp->next = next;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{

    Node *head = NULL;

    push(&head, 78);
    push(&head, 56);
    push(&head, 45);
    push(&head, 56);
    push(&head, 45);

    cout << "Created Linked List: ";
    printList(head);
    deleteNode(&head, 4);
    cout << "\nLinked List after Deletion at position 4: ";
    printList(head);
    return 0;
}

// This code is contributed by premsai2030
