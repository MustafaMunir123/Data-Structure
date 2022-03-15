#include <iostream>
using namespace std;
void queueInsert(int numbers[],int l,int front,int rear,int item)
{
    int i;
    for (i=0; i<=l; i++)
    {
        if (front==-1)
    {
        cout<<"Queue is Empty\n";
        front=0;
        rear=0;
    }
    else if(rear<l)
    {
        cout<<"Enter Element: ";
        cin>>item,"\n";

        numbers[rear]=item;
        rear=rear+1;
    }
    }
    cout<<"Queue is Full";
}

int main()
{
    int l, numbers[l], front=-1, rear=-1,item;
    cout<<"Enter Queue Length: ";
    cin>>l;
    queueInsert(numbers,l,front,rear,item);
    return 0;
}