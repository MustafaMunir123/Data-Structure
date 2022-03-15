#include <iostream>
using namespace std;
void queueDelete(int numbers[],int l, int front,int rear,int item)
{
    int i=0;
    for (i=0; i<l; i++)
    {
        cout<<"Enter Item: ";
        cin>>item,"\n";
        numbers[i]=item;
    }
    while (front>=0){
    numbers[i]=numbers[front];
    if (front==rear)
    {
        front=-1;
        rear=-1;
        cout<<"Underflow";
    }
    else{
    cout<<"Deleting Item\n";
    front++;
    i++;
    }
    }
    
}
int main()
{
    int l, numbers[l], front=0,item;
    cout<<"Enter Queue Length: ";
    cin>>l;
    int  rear=l;
    queueDelete(numbers,l,front,rear,item);
    return 0;
}