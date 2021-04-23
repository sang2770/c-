#include<bits/stdc++.h>
using namespace std;
#define ll long long
//hau to balan
// */=>2  ; +-=>1; (=>0
map<char, int> ut={{'*',2},{'+',1},{'-',1},{'/',2}, {'(',0}};
int f(int a, int b, char z)
{
	if(z=='+') return a+b;
	if(z=='-') return a-b;
	if(z=='*') return a*b;
	if(z=='/') return a/b;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s,h;
	stack<char> S;
	getline(cin, s);
	for(char z:s)
	{
		if(z>='0' && z<='9')  h+=z;
		else if(z=='(') S.push(z);
		else if(ut.find(z)!=ut.end()){
			while(S.size()!=0 && ut[S.top()]>=ut[z])
			{
				h+=S.top();
				S.pop();
			}
			S.push(z);
		}
		else{
			while(S.size()!=0 && S.top()!='(')
			{
				h+=S.top();
				S.pop();
			}
			S.pop();
		}
	}
	while(S.size()!=0)
	{
		h+=S.top();
		S.pop();
	}
	cout<<h<<endl;
	stack<int> so;
	for(char z: h)
	{
		if(z>='0' && z<='9')
		so.push(z-'0');
		else
		{
			int k=so.top();
			so.pop();
			so.top()=f(so.top(), k, z);
			
		}
	}
	cout<<so.top();
	
}


