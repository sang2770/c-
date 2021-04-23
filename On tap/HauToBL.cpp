#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<char, int> UT={{'*',2},{'+',1},{'-',1},{'/',2}, {'(',0}};
int Cal(int a, int b, int c)
{
	if(c=='*') return a*b;
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='/') return a/b;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s, result="";
	cin>>s;
	stack<char> res;
	for(char z:s)
	{
		if('0'<z && z<='9')  result+=z;
		else if(z=='(')  res.push(z);
		else if(UT.find(z) != UT.end())  {
			while(res.size()!=0 && UT[res.top()]>UT[z])
			{
				result+=res.top();
				res.pop();
			}
			res.push(z);
		}  
		else  // th ')'
		{
			while(res.size()!=0 && res.top()!='(')
			{
				result+=res.top();
				res.pop();
			}
			res.pop();
		}
	}
	while(res.size()!=0)
	{
		result+=res.top();
		res.pop();
	}
	cout<<result;
	stack<int> cal;
	for(auto z: result)
	{
		if('0'<z && z<='9')cal.push(z-'0');
		else
		{
			int a=cal.top();
			cal.pop();
			cal.top()=Cal(cal.top(), a, z);
		}
	}
	cout<<endl<<cal.top();
	
	
}


