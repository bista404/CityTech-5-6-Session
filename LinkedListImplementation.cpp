#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * nextNode;
};


void printList(Node *n)
{
    cout<<"Printing the list"<<endl;
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n= n->nextNode;

    }
}


void insertInTheBeginning(struct Node ** headReference, int newData)
{
    /* data */

    struct Node * newNode= (struct Node *) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->nextNode=(* headReference);
    (* headReference)= newNode;
}

void insertInTheEnd(struct Node ** headReference , int newData)
{
    struct Node * newNode=(struct Node *) malloc(sizeof(struct Node));
    struct Node * last= * headReference;
    newNode->data = newData;
    newNode -> nextNode= NULL;
    while(last ->nextNode !=NULL)
    {
        last = last->nextNode;
    }
    last-> nextNode = newNode;
}

void insertAtSpecifiedPosition(struct Node * previousNode , int newData)
{
    if(previousNode ==NULL)
    {
        cout<<"Node cannot be empty";
        return;
    }

    struct Node * newNode= (struct Node *) malloc(sizeof(struct Node));
    newNode -> data= newData;
    newNode->nextNode= previousNode->nextNode;
    previousNode->nextNode= newNode;

}



int main(int argc, char const *argv[])
{
    Node * head =NULL;
    Node * second = NULL;


    head = new Node();
    second = new Node();


    insertInTheBeginning(&head ,1);
    insertInTheEnd(&head ,3);
    insertAtSpecifiedPosition(second,2);

printList(head);
    
    
}
