#include <iostream> //pattern matching lab 3 --Mustafa Munir CT-302
using namespace std;

int pattern_matching(string t,string p){
    
    int l=0,s=t.length(),r=p.length(), k=0,m=0;
    
    while (l<=r and k<=s){
        if (p[l]!=t[k]){
            k=k+1;
            m=0;
            
        }
        else{
            l+=1;
            m+=1;
            if (m==r){
            return k-r+1;
            }
            k+=1;
            }    
     }  
     return 0;
}

int main()
{
    string t, p;
    cout<<"Enter Text: ";
    getline(cin,t),"\n";
    cout<<"Enter Pattern: ";
    getline(cin,p),"\n";
    if (pattern_matching(t,p)==0){
        cout<<"Not Found";
    }
    else{
    cout<<"Pattern Found At Index: "<<pattern_matching(t,p);
    }
    return 0;   
}