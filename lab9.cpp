#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j;
    cout<<"Enter number of rows for first matrix : ";
    cin>>r1,"\n";
    cout<<"Enter number of columns for first matrix : ";
    cin>>c1,"\n";
    cout<<"Enter number of rows for second matrix : ";
    cin>>r2,"\n";
    cout<<"Enter number of columns for second matrix : ";
    cin>>c2,"\n";
    int mat1[r1][c1];

    int mat2[r2][c2];
   
    int res[r1][c2];
  
    if (r2==c1)
    {
        for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<"Enter Elemnt: ";
            cin>>mat1[i][j],"\n";
        }
    }
        for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<"Enter Elemnt: ";
            cin>>mat2[i][j],"\n";
        }
    }
        for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            res[i][j]=mat1[i][j]*mat2[j][i];
            cout<<res[i][j]<<"   ";
        }
        cout<<"\n";
    }
    }
    else{
        cout<<"Can't Perform Multiplication ";
    }
    return 0;
}