#include <iostream>
#include <stdlib.h>
using namespace std;

void binary_search(int numbers[],int n,int l)
{
    int first=0, last=l, i, mid=(first+last)/2;
    while (numbers[mid]!=n){
        mid=(first+last)/2;
            if (n<numbers[mid]){
                last=mid-1;
            }
            else if (n>numbers[mid]){
                first=mid+1;
            }
    }
    cout<<n<<" found at index: "<<mid;
}
int main()
{
    int l=10,n=107,numbers[l]={1,2,45,69,89,94,99,101,107,109};
    binary_search(numbers,n,l);
    return 0;  
}