#include <iostream>
using namespace std;
int main()
{
    int m,n,index;
    string text="Computer Science", pattern="put";
    for (n=0; n < text.length(); n++)
    {
    if (pattern[m]!=text[n])
        {
            
            continue;
        }
    else if(pattern[m]==text[n])
    {
        int index = n;
        break;
        //int m=m+1;
    }
    }
    cout<<"Pattern found at "<<index<<endl;
return 0;
}