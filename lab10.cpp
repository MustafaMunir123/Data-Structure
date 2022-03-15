#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void StackPush(int numbers[],int l)
{
    int i,n;
    for (i=0; i<=l-1; i++)
    {
        cout<<"Enter element: ";
        cin>>n;
        numbers[i]=n;
    }
    cout<<"Over flow";
}
int main()
{
    int l, numbers[l];
    cout<<"Enter lengh of stack: ";
    cin>>l;
    StackPush(numbers,l);
    return 0;
}