#include<iostream>
using namespace std;
#define SIZE 5
int array[SIZE];
int front=-1;
int rear=-1;

bool isEmpty()
{

    if(front && rear == -1)
        return true;
        else
        return false;
}
void enqueue(int value)
{

    if(rear==SIZE -1)
        cout<<"Queue is full";
    else
    {
        if(front==-1)
            front=0;
        rear++;
        array[rear]=value;
    }
}
void dequeue()
{
    if(isEmpty())
        cout<<"Queue is empty";
    else
    if(front==rear)
    front=rear=-1;
    else
        front++;


}
void peek()
{
    if( isEmpty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<array[front]<<endl;

}
void display()
{
 if(isEmpty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<array[i]<<" ";
  cout<<"\n";
 }
}
int main()
{

 cout<<"Inserting elements "<<endl;;
 enqueue(2);
 display();
 enqueue(3);
 display();
 enqueue(5);
 display();
 enqueue(7);
 display();
 enqueue(8);
 dequeue();
 display();

 enqueue(9);

 peek();

 cout<<"Removing elements"<<endl;

 dequeue();
 display();
 dequeue();
 display();
 dequeue();
 display();
 dequeue();
 display();


 return 0;
}
