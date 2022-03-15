#include <iostream>
#include <stdlib.h>
using namespace std;

void linear_search(int numbers[], int n, int l)
{
    int i;
    bool flag=false;
    for (i=0; i<l ;i++){
        if (numbers[i]==n){
            cout<<"Required number found at index: "<<i<<endl;
            flag=true;
            exit;
        }
    }
    if (flag==true){
        exit;
    }
    else{
    cout<<"Not Found";
    }
}

int main()
{
    int l=100, n, numbers[l], i;
    for (i=0;i<l;i++){
        numbers[i]=i+1;
    }
    cout<<"Enter number to find: ";
    cin>>n,"\n";
    linear_search(numbers,n,l);
    return 0;

}