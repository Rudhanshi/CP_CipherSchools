
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

bool isPalindromeHelper(Node ** left, Node * right) {
    if (right == NULL) {
        return true;
    }
    bool isPalin = isPalindromeHelper(left, right->next);
    if (!isPalin) {
        return false;
    }

    bool dataEqual = ((*left)->data == right->data);
    (*left) = (*left)->next;
    return dataEqual;
}

bool isPalindrome(Node * head){
    return isPalindromeHelper(&head, head);
}

int main()
{
}
