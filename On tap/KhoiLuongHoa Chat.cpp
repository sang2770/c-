#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<char, int > k={{'H',1},{'O',16},{'C',12},{'(',0}};

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<int> res;
		ll result=0;
		for(char z: s)
		{
			if(k.find(z)!=k.end())
			res.push(k[z]);
			else if('0'<z && z<='9')  res.top()*=(z-'0');
			else{
				int t=0;
				while(res.top()!=0)
				{
					t+=res.top();
					res.pop();
				}
				res.top()=t;
			}
			
		}
		while(res.size()!=0)
			{
				result+=res.top();
				res.pop();
			}
			cout<<result<<endl;
		
		
	}
	
	
}


