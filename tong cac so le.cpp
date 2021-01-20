#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	int x, y, j=0, res=0;
  	cin>>x>>y;
  	if(x%2==0)
  	 x++;
    for(int j=0;j<y;j++)
    {
    	res+=x;
    	x+=2;
	}
  	cout<<res<<endl;	
  }
}

