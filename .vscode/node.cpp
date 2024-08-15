#include <iostream>
struct Node 
{
    int data;
    Node* next;
};

int main() 
{
    int uninitializedVar;
    std::cout<<"Uninitialized Variable: "<<uninitializedVar<<std::endl;

    Node* node1 = new Node();
    node1->data = 10;

    Node* node2 = new Node();
    node2->data = 20;
    node1->next = node2;

    delete node2;

    if (node1->next)
    {
        std::cout<<"Dangling Pointer Data: "<< node1->next->data<<std::endl;
    }

    delete node1;

    return 0;
}