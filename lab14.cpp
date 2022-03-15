#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void mergesort(int numbers[],int l, int r,int mid)
{
    int j,i;
    if (l<r)
    {
        for (i=l; i=mid; i++)
    {
        for (j=l; j=mid; j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                swap(numbers[j], numbers[j+1]);
            }
        }
    }
        for (int i=mid+1; i=r; i++)
    {
        for (int j=mid+1; j=r; j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                swap(numbers[j], numbers[j+1]);
            }
        }
    }
    // Now merging in increasing order 
    int 
        k=l,
        temp[r];
        j=mid+1;
        i=l;
        
    while (numbers[i]<= numbers[mid] && numbers[j]<=numbers[r])
    {
        if (numbers[i] < numbers[j]){
            temp[k]=numbers[i];
            i++;
        }
        else {
            temp[k]=numbers[j];
            j++;
        }
        k++;
    }

    if (numbers[i]>numbers[mid])
    {
        while (numbers[j]<=numbers[r]){
        temp[k]=numbers[j];
        k++; j++; 
        }
    }
    else{
        while (numbers[i]<=numbers[mid]){
            temp[k]=numbers[i];
            i++; k++;
        }
    }

    // shifting sorted elements from temporary array to origianl array

    for (i=l; i<r; i++)
    {
        numbers[i]=temp[i];
    }
    // Printing resultant array
    for (i=l; i<r; i++)
    {
        cout<<numbers[i]," ";
    }
    }
    
    else
    {
        cout<<"Already Sorted";
    }
    
}

int main()
{
    int l=0,r=6,numbers[r]={33,5,6,22,9,99};
    int mid=(l+r)/2;
    mergesort(numbers,l,r,mid);

    return 0;
}