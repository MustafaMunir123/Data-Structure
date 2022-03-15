#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int numbers[], int l)
{
    int i,n=0,j;
    for (i=n; i<l; i++)
    {
        for (j=n; j<l; j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                swap(numbers[j], numbers[j+1]);
            }
        }
    }
}
void print(int numbers[],int l)
{
    int i;
    for (i=0; i<l; i++)
    {
        cout<<numbers[i]<<" ";
    }
}
int main()
{
    int l=10,numbers[l]={1,22,12,9,18,99,10,8,999,101};
    bubblesort(numbers,l);
    cout<<"Sorted Result"<<endl;
    print(numbers,l);
    return 0;
}