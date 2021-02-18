#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node * head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "\n";
}

int getSize(Node * head)
{
    Node *ptr = head;
    int size = 0;
    while (ptr != NULL)
    {
        size++;
        ptr = ptr->next;
    }
    return size;
}

Node * removeDuplicateSortedLL(Node * head) {
    if (head == NULL || head->next == NULL)
        return head;
    Node * curr = head;
    Node * nxt = NULL;
    while (curr->next != NULL) {
        if (curr->data == curr->next->data) {
            nxt = curr->next;
            curr->next = nxt->next;
            delete nxt;
        } else {
            curr = curr->next;
        }
    }
    return head;

}





int main()
{
}
