#include<bits/stdc++.h>
using namespace std;
#define ll long long
// khoi luong hoa chat
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	map<char, int> k={{'H',1},{'O',16},{'C',12},{'(',0}};
//	map<char, int> k={{'1',1},{'2',2},{'3',3},{'4',4}};
    int test;
    cin>>test;
    while(test--)
    {
	string e;
	cin>>e;
	stack<int> s;
	for(char c:e)
	{
		if(k.find(c)!=k.end())
		s.push(k[c]);
		else if('0'<c && c<='9') s.top()*=c-'0';
		else //c=')'
		{
			int t=0;
			while(s.top()!=0)
			{
				t+=s.top();
				s.pop();
				}
			s.top()=t;
			}
		}
	int t=0;
	while(s.size()!=0){ t+=s.top();s.pop();}
	cout<<t<<endl;
	}
				
	//kiem tra ma ascii
//	char c='2';
//	cout<<int(c);
//	
}


