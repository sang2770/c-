#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dem=0, x, i=2;
queue<int>save;
void dam()
{
	save.push(1);
	while(true)
	{
		ll a=save.front();
		save.pop();
		if(a>x)
		 break;
		else
		{
			dem++;
			x=x-a;
			save.push(a+i);
			
			i++;
			}
			}
	}
			
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>x;
  dam();
  cout<<dem;
  }
  

