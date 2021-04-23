#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Write(string fn="test.txt")
{
	int n;
	cin>>n;
	ofstream outfile;
	outfile.open(fn);
	outfile<<n;
}
void Read(string fn="test.txt")
{
	int n;
//	ifstream in;
//	in.open(fn);
//	in>>n;
//	cout<<n;
	ifstream in(fn, ios::out);
	in>> n;
	cout<<n;
}
void combo(string fn="test.txt")
{
	int n;
	fstream in(fn);
	in>>n;
//	in<<n;
	cout<<n;
	for(int i=0;i<3;i++)
	{
		in>>n;
		cout<<n<<endl;
	}
	in<<3;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
//	Ghi();
//	Read();
	combo();
	
}


