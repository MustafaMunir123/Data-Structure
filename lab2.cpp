#include<iostream>//DELETE
using namespace std;
string Delete(string T,int R,int L)
{
	string temp1=T.substr(0,R);
	string temp2=T.substr(R+L,T.length());
	string B=temp1.append(temp2);
	return B ;
}
int main()
{
	string T="";
	int R,L;
	cout<<"Enter text:";
	getline(cin,T);
	cout<<"Enter position from you want delete substring:";
	cin>>R;
	cout<<"Enter length of deletion of words:";
	cin>>L;
	string A=Delete(T,R,L);
	cout<<A;
}