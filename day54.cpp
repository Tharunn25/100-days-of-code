// day 54 out of 100

#include <iostream>

using namespace std;

// namma oru linked list node ah create pandrom
class Node
{
public:
    int data;
    Node *next;
};

// linked list la irukura data va feed pandrathuku oru function a create pandrom

void push(Node **head_ref, int new_data)
{

    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

// node ah delete pandrathuku oru function ah create pandrom

void deletion(Node **head_ref, int k)
{

    /* head node oda address miss agida kudathu adhanla temp nu varible create panni adhula head node oda
    data va store pandrom*/
    Node *temp = *head_ref;

    // Node* prev = NULL;

    if (temp != NULL && temp->data == k)
    {

        /* kuduthuruka node oda temp vandhy null illa aprm adhoda data vandhu kuduthuruka data va irundhuchi
        naa adha delete pandrom

        head node oda address miss aida kudadhy adhunala temp oda next la vandhu head ref oda address ah
        store pandrom */

        *head_ref = temp->next;

        // so kuduthuruka data kedachadhanala adha delete pandrom
        delete temp;

        return;
    }

    else
    {
        // enga temp um null illa aprm kuduthuruka data um match agala na namba temp ah traverse pannanum

        while (temp != NULL && temp->data != k)
        {

            // adanala prev node ah vandhu temp ku point panna veikurom
            prev = temp;

            // aprm temp vandhu temp oda next ah point pannanum same as traversal of linked list
            temp = temp->next;
        }

        // temp vandhu null ah irundhuchi na adhan first and only node in the linked list so apdiye namma
        // adha return pandrom
        if (temp == NULL)
        {
            return;
        }

        // linked list traverse agura apa nammaku andha key kedachina namma prev node oda next ah vandhu
        // temp oda next ah mathurom
        prev->next = temp->next;

        // aprm adha kandu pidicha aprm adha namma delete pandrom
        delete temp;
    }
}

// namma enga linked list ah print pandrathuku oru function ah create pandrom
// with the argumetn node
void print_linkedlist(Node *node)
{

    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    // first node of the linked should be null so we are declaring a node which points to the head is null
    Node *head = NULL;

    push(&head, 6);

    push(&head, 9);

    push(&head, 3);

    push(&head, 1);

    push(&head, 8);

    cout << "The linked list before deleting an element : ";
    print_linkedlist(head);

    // namma enga head ah address ah pass panni data containing 8 ah delete pandrom
    deletion(&head, 8);

    cout << "The linked list after deletion is : ";

    print_linkedlist(head);

    return 0;
}
