#include <iostream>
using namespace std;

int pattern_matching(string t,string p){
    int index;
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
string Replace(string t,string rp,int R,int L)
{
	string temp1=t.substr(0,R);
	string temp2=t.substr(R+L,t.length());
	string B=temp1.append(rp);
    string C=B.append(temp2);

	return C ;
}

int main()
{
    string t,p,rp;
    
    cout<<"Enter Text: ";
    getline(cin,t),"\n";
    cout<<"Enter Pattern: ";
    getline(cin,p),"\n";
    int L=p.length();
    cout<<"Enter pattern to replace with: ";
    getline(cin,rp),"\n";
    int R=pattern_matching(t,p);
    cout<<Replace(t,rp,R,L);
    return 0;
}
