#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, bool> d;
void TRY(vector<int> &x, int n)
{
	if(x.size()==n)
	{
		cout<<"\n";
		int static dem=0;
		dem++;
		for(int z:x)  cout<<z<<" ";
		
	}
	else
	{
		for(int t=1;t<=n;t++)
		{
			if(!d[t])
			{
				d[t]=1;  //tien
				x.push_back(t);
				TRY(x, n);
				d[t]=0; x.pop_back(); //lui
			}
		}
	}
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	vector<int> x;
	TRY(x,4 );
}


