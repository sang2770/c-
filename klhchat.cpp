#include<bits/stdc++.h>
using namespace std;
#define ll long long
// khoi luong hoa chaty lam lai

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	map<char, int> Q={{'O',16},{'H',1},{'C',12},{'(',0}};
	int test;
	cin>>test;
	while(test--)
	{
		stack<int> kt;
		string s;
		cin>>s;
		for(char z:s)
		{
			if(Q.find(z)!=Q.end())
			kt.push(Q[z]);
			else if('0'<z && z<'9')  kt.top()*=z-'0';
			else{  // c=')'
				int t=0;
				while(kt.top()!=0)
				{
					t+=kt.top();
					kt.pop();
				}
				kt.top()=t;
			}
		}
		int t=0;
		while(kt.size())
		{
			t+=kt.top();
			kt.pop();
		}
		cout<<t<<endl;
	}
	
}


