#include<iostream>//INSERT
using namespace std;
string Insert(string t,int R,string p)
{
	int L=p.length();
    string temp1=t.substr(0,R);
	string temp2=t.substr(R,t.length());
	string B=temp1.append(p);
    string C=B.append(temp2);
	return C ;
}
int main()
{
	string t,p;
	int R;
	cout<<"Enter text:";
	getline(cin,t),"\n";
	
	cout<<"Enter pattern:";
	getline(cin,p),"\n";
    cout<<"Enter position from you want to insert substring:";
	cin>>R,"\n";
	string A=Insert(t,R,p);
	cout<<A;
}