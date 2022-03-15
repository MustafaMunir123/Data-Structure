#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void stackPull(int numbers[],int l)
{
    int i,k=l;
    cout<<"Reducing Stack \n";
    for (i=0; i<l; i++)
    {
        cout<<"...\n";
        k=k-1;
    }
    if (k==0)
    {
        cout<<"Under Flow \nStack Emptied";
    }
}
int main()
{
    int l, numbers[l];
    cout<<"Enter lengh of stack: ";
    cin>>l;
    stackPull(numbers,l);
    return 0;
}